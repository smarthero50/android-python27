## Tutorial: How to run Python from the shell ##

Using your terminal program, enter `adb shell` to connect to your device. You may need to add the serial number for your emulator or device to that command. Also, the device may need to be rooted so that you have root permissions.

Enter this once connected:

```
export PYTHONHOME=/data/data/com.android.python27/files/python
export PYTHONPATH=/sdcard/com.android.python27/extras/python:/data/data/com.android.python27/files/python/lib/python2.7/lib-dynload:/data/data/com.android.python27/files/python/lib/python2.7
export PATH=$PYTHONHOME/bin:$PATH
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/data/data/com.android.python27/files/python/lib:/data/data/com.android.python27/files/python/lib/python2.7/lib-dynload
```

Now Python can be executed from the shell like:

`python hello.py`



And if you need to test SL4A API from the shell, you just need to add this before launching python:

```
export AP_HOST=localhost
export AP_PORT=45777
am start -a com.android.python27.LAUNCH_RPC_SERVER -n com.android.python27/.RpcServerLauncher --ei com.android.python27.RPC_SERVER_PORT 45777
```

Then you can import android ; droid = android.Android() etc... from the shell.