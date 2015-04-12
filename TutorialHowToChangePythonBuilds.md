## Tutorial: How to change the Python builds that are embedded into the APK ##

**Overview:**

Currently Python 2.7.2 is supplied with the template project and embedded into the APK. This is located in the `res/raw` directory, which by default contains `python_27.zip` and `python_extras_27.zip`. During the installation of the APK, these archives are unpacked and used by the app to execute your scripts.

Modules can be added or removed from this archive, or the Python build can be changed to update or revert to another Python version. This is done by replacing the `python_27.zip` and `python_extras_27.zip` archives located in the `res/raw` directory.

**Naming:**

The default archive names for Python 2.7.2 are: `python_27.zip` and `python_extras_27.zip`. If your zip archives are named differently, then you'll need to change the variables inside the `GlobalConstants.java` file located in `src/` respectively.

**Example:**

To change the Python build to Python version 2.6.2 as provided by PY4A, download `python_r16.zip` and `python_extras_r14.zip` from https://code.google.com/p/python-for-android/downloads/list. The default values in the `GlobalConstants.java` file are:
```
public static final String PYTHON_NICE_NAME = "Python 2.7.2";
public static final String PYTHON_ZIP_NAME = "python_27.zip";
public static final String PYTHON_EXTRAS_ZIP_NAME = "python_extras_27.zip";
```

Change these values to:

```
public static final String PYTHON_NICE_NAME = "Python 2.6.2";
public static final String PYTHON_ZIP_NAME = "python_r16.zip";
public static final String PYTHON_EXTRAS_ZIP_NAME = "python_extras_r14.zip";
```

You would also need to change `environmentVariables` (basically replace python2.7 by python2.6) in `ScriptService`