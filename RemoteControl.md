# RemoteControl #

Create scripts on your PC and run them on your Android device.

Copy `android.py` on your PC (from: https://android-python27.googlecode.com/hg/python-build/android.py)

Then from your PC:

```
C:\Users\user\Desktop>adb shell am start -a com.android.python27.LAUNCH_RPC_SERVER -n com.android.python27/.RpcServerLauncher --ei com.android.python27.RPC_SERVER_PORT 45777

C:\Users\user\Desktop>adb forward tcp:9999 tcp:45777

C:\Users\user\Desktop>set AP_PORT=9999

C:\Users\user\Desktop>python
Python 2.7.2 (default, Jun 12 2011, 15:08:59) [MSC v.1500 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license" for more information.
>>> import android
>>> droid = android.Android()
>>> droid.makeToast("Hello from PC")
```