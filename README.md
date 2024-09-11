# C++ Protobuf Template Project

This is a C++ template project that demonstrates the use of Protocol Buffers (Protobuf) in a development container (devcontainer) within Visual Studio Code. The project is pre-configured with CMake and a Makefile to streamline the build, run, and development process, providing an efficient starting point for working with Protobuf in C++.

## Installation Steps

1. **Clone the repo**
   ```sh
   git clone https://github.com/michal34512/proto-devcontainer.git
   ```
3. **Navigate to the project directory**
   ```sh
   cd proto-devcontainer
   ```
4. **Open the project in Visual Studio Code**
   ```sh
   code .
   ```
4. **Reopen in Devcontainer**  
   Once VS Code is open, press `F1`, type `Reopen in Container`, and select the command to launch the devcontainer environment.
5. **Wait for the Devcontainer to build**  
   After the devcontainer is set up, open the terminal within VS Code.
6. Build and run the project
   ```sh
   make all
   ```

   

## Project Structure

- `Makefile` — Contains the rules to compile, run, and clean the project.
- `CMakeLists.txt` — CMake configuration for the project.
- `src/` — Source files for the project.
- `build/` — Directory created for building the project.

## Makefile Targets

| Target   | Description              |
|----------|--------------------------|
| `all`    | Builds and runs the project. |
| `build`  | Compiles the project in the `build/` directory. |
| `run`    | Runs the compiled binary. |
| `clean`  | Removes the `build/` directory and cleans the project. |
| `help`   | Displays help and usage instructions. |

