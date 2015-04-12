# Tutorial: how to create a custom APK #

In the following, it is assumed that you're changing the package name from 'com.android.python27' to 'com.android.myapp' and the app name from PythonAPK to MyAPK.

1. Open 'PythonAPK', right click on it, and select 'Copy' and then enter a new name, like 'MyAPK'. Then right click somewhere below and select 'Paste'. Close the 'PythonAPK' project.

2. On the files under 'src/'

```
a) On the first file 'com.android.python27' right click and select 'Refactor -> Rename' and change the package name from 'com.android.python27' to 'com.android.myapp'

b) Check "Update references" and "Rename subpackages' and click OK.
```

3. In `AndroidManifest.xml` change:
```
a) 'package="com.android.python27' to 'package="com.android.myapp'

b) <action android:name="com.android.python27.ScriptService"/>  to  <action android:name="com.android.myapp.ScriptService" />
```

(or you can do a Find/Replace for 'com.android.python27' to 'com.android.myapp')

4. In ant.properties change:

```
application.package=com.android.python27 to application.package=com.android.myapp
```

5. In build.xml change:

```
<project name="PythonAPK"> to <project name="MyAPK">
```

6. In strings.xml change:
```
<string name="app_name">PythonAPK</string>
<string name="loading">PythonAPK running...</string>

to

<string name="app_name">MyAPK</string>
<string name="loading">MyAPK running...</string>
```

7. In `GlobalConstants.java` change:
```
public static final String LOG_TAG = "PythonAPK"; 
	
to
	
public static final String LOG_TAG = "MyAPK";
```

8. Select 'Project -> Clean'

9. In case there are any problems preventing compiling, look for a red 'x' appearing on folders and files inside them, and in the files, search for text that has "com.android.python27' in them and change this to 'com.android.myapp'