To run a Qt project configured with CMake, as described by your `CMakeLists.txt`, you'll need to follow a sequence of steps. This process involves generating build files with CMake and then using those files to build and run your application. Here's a step-by-step guide:

### 1. Install CMake and Qt

Ensure you have both CMake and Qt installed on your system. Your `CMakeLists.txt` file specifies Qt version 5.12.12, so ensure that exact version is installed and that you've updated the `Qt5_DIR` path in the `CMakeLists.txt` to match the location of your Qt installation.

### 2. Prepare Your Project Directory

Your project directory should at least contain the following files:

- `CMakeLists.txt`: Your project configuration file.
- `main.cpp`: Your application source code.

### 3. Generate Build Files

Open a command line or terminal window and navigate to your project directory. Use CMake to generate build files for your specific environment:

```sh
mkdir build
cd build
cmake .. -G "Your Generator" -DCMAKE_PREFIX_PATH="C:/Qt/Qt5.12.12/5.12.12/msvc2017_64"
```

Replace `"Your Generator"` with the build system generator you're using, like `"Ninja"` or `"Visual Studio 16 2019"`. You can see a list of available generators by running `cmake --help`. The `CMAKE_PREFIX_PATH` should point to your Qt installation directory; adjust the path as necessary for your system.

### 4. Build the Project

Still in the `build` directory, build the project using the generated build system. For example, if you're using Makefiles, you'd simply run:

```sh
make
```

If you're using Visual Studio, open the generated `.sln` file and build the project using the IDE.

### 5. Run the Application

After building the project, you'll find the executable in the `build` directory, or under the Debug/Release subdirectory, depending on your configuration. You can run it directly from the command line, or by double-clicking on the executable file in a file explorer.

### Troubleshooting

- **Qt5_DIR Not Found**: If CMake cannot find your Qt installation, ensure the `Qt5_DIR` variable in your `CMakeLists.txt` file points to the directory containing `Qt5Config.cmake` or `qt5-config.cmake` for your Qt version.
- **Build Errors**: Make sure you have the right version of the compiler for the Qt version you're using. For Qt 5.12.12 with MSVC 2017, you'll need Visual Studio 2017 or a compatible toolset installed.
- **Runtime Errors**: If the application fails to start because of missing Qt DLLs, you may need to add the Qt binaries directory to your `PATH` environment variable, or copy the required Qt DLLs to the same directory as your application executable.

Following these steps should help you compile and run your Qt application configured with CMake.