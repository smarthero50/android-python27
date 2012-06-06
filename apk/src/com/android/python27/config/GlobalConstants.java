package com.android.python27.config;

import com.android.python27.ScriptApplication;

import android.os.Environment;

import java.util.HashMap;
import java.util.Map;

public class GlobalConstants {

	public static final String PYTHON_MAIN_SCRIPT_NAME = "hello.py";
	public static final String PYTHON_PROJECT_ZIP_NAME = "my_python_project.zip";
	public static final String PYTHON_ZIP_NAME = "python_27.zip";
	public static final String PYTHON_EXTRAS_ZIP_NAME = "python_extras_27.zip";

	public static final boolean IS_FOREGROUND_SERVICE = true;

    public static final String PYTHON_BIN_RELATIVE_PATH = "/python/bin/python";
    public static final String PYTHON_NAME = "python";
	public static final String PYTHON_NICE_NAME = "Python 2.7.2";
	
    public static final Map<String, String> ENV_VARS = new HashMap<String, String>();
    static {
    	ENV_VARS.put("PYTHONPATH", Environment.getExternalStorageDirectory().getAbsolutePath()+ "/" + ScriptApplication.getThePackageName() + "/extras/python" + ":" + ScriptApplication.getTheFilesDir() + "/python/lib/python2.7/lib-dynload" + ":" + ScriptApplication.getTheFilesDir() + "/python/lib/python2.7");
    	ENV_VARS.put("TEMP", Environment.getExternalStorageDirectory().getAbsolutePath() + "/" + ScriptApplication.getThePackageName() + "/extras/tmp");
    	ENV_VARS.put("PYTHONHOME", ScriptApplication.getTheFilesDir() + "/python");
    	ENV_VARS.put("LD_LIBRARY_PATH", ScriptApplication.getTheFilesDir() + "/python/lib" + ":" + ScriptApplication.getTheFilesDir() + "/python/lib/python2.7/lib-dynload");
    }
    
    public static String[] SCRIPT_ARGS = {"--foreground"};
    
	public static final String LOG_TAG = "PythonAPK";
}
