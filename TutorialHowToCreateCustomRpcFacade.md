# Tutorial: How to create a custom RPC facade #

A custom RPC template has been added in the project package `com.googlecode.android_scripting`, this can be used as basis to create your own facade definition, see: https://code.google.com/p/android-python27/source/browse/apk/src/com/googlecode/android_scripting/facade/ACustomFacade.java

```
@RpcMinSdk(4)
public class ACustomFacade extends RpcReceiver {
          
  private final CountDownLatch mOnInitLock;

  public ACustomFacade(FacadeManager manager) {
    super(manager);
    mOnInitLock = new CountDownLatch(1);
    mOnInitLock.countDown();
  }

  public void shutdown() {
  }

  @Rpc(description = "Print hello in logcat")
  public void aHelloFonction(@RpcParameter(name = "message") String message) throws InterruptedException {
    mOnInitLock.await();
    Log.i(GlobalConstants.LOG_TAG, "ACustomFacade received: " + message);
  }
}
```

- Adjust `@RpcMinSdk(4)` and add any needed permission used by the new code in `AndroidManifest.xml`.

Once your facade is created you need to register it in `FacadeConfiguration.java`, see: https://code.google.com/p/android-python27/source/browse/apk/src/com/googlecode/android_scripting/facade/FacadeConfiguration.java

```
sFacadeClassList.add(ACustomFacade.class);
```

Then from Python code you can call the newly created RPC:

```
import android
droid = android.Android()
droid.aHelloFonction("hello rpc")
```

---


**Note**: you can extend the range of native code accessible through Python by using:

  * a RPC facade and JNI + your own cross-compiled C code
  * or directly without RPC use, by using [ctypes](http://docs.python.org/library/ctypes.html) and your own cross-compiled C code in a shared object (take care using the fullpath to your .so when loading it with ctypes: `cdll.LoadLibrary("full_path_to_the_so")`)