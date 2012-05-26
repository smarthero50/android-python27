package com.android.python27;

import android.content.Context;

import com.googlecode.android_scripting.BaseApplication;
import com.googlecode.android_scripting.interpreter.InterpreterConfiguration.ConfigurationObserver;

public class ScriptApplication extends BaseApplication implements ConfigurationObserver {

//  private volatile boolean receivedConfigUpdate = false;
//  private final CountDownLatch mLatch = new CountDownLatch(1);

  private static Context context = null;
  private static String thePackageName = null;
  private static String theFilesDir = null;

  // ------------------------------------------------------------------------------------------------------

  public static Context getAppContext() {
      return ScriptApplication.context;
  }

  public static String getThePackageName() {
	  return thePackageName;
  }
	
  public static String getTheFilesDir() {
	  return theFilesDir;
  }

  // ------------------------------------------------------------------------------------------------------

  @Override
  public void onCreate() {
//    mConfiguration = new InterpreterConfiguration(this);
//    mConfiguration.registerObserver(this);
//    mConfiguration.startDiscovering(InterpreterConstants.MIME + Utils.getFileExtension("foo.py"));
		
	  // dirty way to access some needed info in GlobalConstants
	  ScriptApplication.context = getApplicationContext();
	  ScriptApplication.theFilesDir = this.getFilesDir().getAbsolutePath();
	  ScriptApplication.thePackageName = this.getPackageName();
  } 

@Override
  public void onConfigurationChanged() {
//	receivedConfigUpdate = true;
//	mLatch.countDown();
  }

//  public boolean readyToStart() {
//
//    try {
//      mLatch.await();
//    } catch (InterruptedException e) {
//      e.printStackTrace();
//    }
//
//    return receivedConfigUpdate;
//  }

}
