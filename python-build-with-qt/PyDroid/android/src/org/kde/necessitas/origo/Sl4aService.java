package org.kde.necessitas.origo;

import java.io.IOException;
import java.util.Map;

import android.annotation.TargetApi;
import android.app.Service;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Binder;
import android.os.Build;
import android.os.IBinder;
import android.util.Log;

import com.googlecode.android_scripting.AndroidProxy;
import com.googlecode.android_scripting.Exec;

public class Sl4aService extends Service {
  private final IBinder mBinder;
  private AndroidProxy mProxy = null;

  public class LocalBinder extends Binder {
    public Sl4aService getService() {
      return Sl4aService.this;
    }
  }

  @Override
  public IBinder onBind(Intent intent) {
    return mBinder;
  }

  public Sl4aService() {
    mBinder = new LocalBinder();
  }

  @Override
  public void onCreate() {
    super.onCreate();
  }

@Override
	public void onDestroy() {
		super.onDestroy();
		
		if(mProxy!=null) {
			try {
				mProxy.shutdown();
			} catch (Exception e) {
				Log.d("PyDroid", "Failed to shutdown mProxy : " + e.getMessage());
			}
		}
	}
  
  @TargetApi(11)
  @Override
  public void onStart(Intent intent, int startId) {
    super.onStart(intent, startId);
	
    Log.d(GlobalConstants.LOG_TAG, "OnStart::sl4aService");

	
	  LaunchServerAsyncTask ll = new LaunchServerAsyncTask(intent);
		if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.HONEYCOMB_MR2) {
			ll.executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, "");
		}
		else {
			ll.execute();	
		}
  }

@TargetApi(Build.VERSION_CODES.CUPCAKE)
public class LaunchServerAsyncTask extends AsyncTask<String, Integer, Boolean> {
	  
	  Intent i = null;
	  
	  LaunchServerAsyncTask(Intent intent) {
		this.i = intent;  
	  }
	  
	   @Override
	   protected void onPreExecute() {
	   }

	   @Override
	   protected Boolean doInBackground(String... params) {
		   launchServer();
		   //launchServer2(this.i, false);

		   return true;
	   }

	   @Override
	   protected void onProgressUpdate(Integer... values) {
	   }

	   @Override
	   protected void onPostExecute(Boolean installStatus) {
	   }
  
 }
  
private boolean tryPort(AndroidProxy androidProxy, boolean usePublicIp, int usePort) {
    if (usePublicIp) {
      return (androidProxy.startPublic(usePort) != null);
    } else {
      return (androidProxy.startLocal(usePort) != null);
    }
  }

private AndroidProxy launchServer2(Intent intent, boolean requiresHandshake) {
	  
	Log.d(GlobalConstants.LOG_TAG, "Starting Android RPC proxy...");

    AndroidProxy androidProxy = new AndroidProxy(this, intent, requiresHandshake);
    boolean usePublicIp = false;
    int usePort = intent.getIntExtra("org.kde.necessitas.origo.RPC_SERVER_PORT", 0);
    
    // If port is in use, fall back to defaut behaviour
    if (!tryPort(androidProxy, usePublicIp, usePort)) {
      if (usePort != 0) {
        tryPort(androidProxy, usePublicIp, 0);
      }
    }
    
	Log.d(GlobalConstants.LOG_TAG, "Started Android RPC proxy.");

    return androidProxy;
  }
 

  private void launchServer() {
		Log.d(GlobalConstants.LOG_TAG, "Starting Android RPC proxy...");
		mProxy = new AndroidProxy(this, null, true);
		mProxy.startLocal();
		
		Exec.mysetenv("AP_HOST", mProxy.getAddress().getHostName(), 1);
		Exec.mysetenv("AP_PORT", Integer.toString(mProxy.getAddress().getPort()), 1);
		if (mProxy.getSecret() != null) {
			Exec.mysetenv("AP_HANDSHAKE", mProxy.getSecret(), 1);
		}
		
		Log.d(GlobalConstants.LOG_TAG, "Started Android RPC proxy.");
  }
}
