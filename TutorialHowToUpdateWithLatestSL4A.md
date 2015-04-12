# Tutorial: how to update with latest SL4A #

The APK is using SL4A through `script.jar` file, this file contains SL4A classes. The `script.jar` used in this project is the very same in SL4A build, except one file has been removed: `FacadeConfiguration.class` (com/googlecode/android\_scripting/facade)

So to update with lastest SL4A you need to grab latest script.jar from: https://android-scripting.googlecode.com/hg/android/ScriptForAndroidTemplate/libs/script.jar

Extract it in a folder, remove `com/googlecode/android_scripting/facade/FacadeConfiguration.class`
and `META-INF` folder, then open a terminal and run:
```
jar cf script.jar *
```

Then replace `script.jar` in the project (https://code.google.com/p/android-python27/source/browse/#hg%2Fapk%2Flibs) by the newly created one.