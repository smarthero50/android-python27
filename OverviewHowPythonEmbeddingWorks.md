## Overview: How Python scripts and the interpreter are embedded ##

Python scripts and the Python interpreter are zipped into archives and packaged in the APK. Upon installation, these archives are unpacked into a path on the Android device. The Python interpreter is then exec'd to run the main Python script, which can import other Python scripts.

There is no need for the app to download a separate Python interpreter since it's already packaged into the APK. The Python scripts and the interpreter can also easily be modified by editing the zip archives, or upgraded by replacing the archives with different ones.