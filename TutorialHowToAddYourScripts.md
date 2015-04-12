## Tutorial: How to add your Python scripts ##

**Overview:**

To add your scripts to the project, zip all your Python script files into a single archive and place it in the `res/raw` directory.

**Naming:**

There is a demo archive provided with the template named `my_python_project.zip` which contains a main Python script named `hello.py`. If you use a different name for your main Python script, then in the `GlobalConstants.java` file located in `src/` change the value of the variable `PYTHON_MAIN_SCRIPT_NAME`. If you use a different name for your script archive, then change the value in the variable `PYTHON_PROJECT_ZIP_NAME`

**Example:**

The default values in the `GlobalConstants.java` file are:
```
public static final String PYTHON_MAIN_SCRIPT_NAME = "hello.py";
public static final String PYTHON_PROJECT_ZIP_NAME = "my_python_project.zip";
```

If the name of your main script is "my\_script.py" and its archive zip name is "my\_script.zip", then the values in the `GlobalConstants.java` file should be changed to:
```
public static final String PYTHON_MAIN_SCRIPT_NAME = "my_script.py";
public static final String PYTHON_PROJECT_ZIP_NAME = "my_script.zip";
```