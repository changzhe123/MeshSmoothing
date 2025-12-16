@echo off
REM ============================================================
REM cmake_build_project.bat - 自动构建 MeshSmoothing 项目
REM 项目路径：D:\Git\MeshSmoothing
REM 构建目录：可在仓库外，避免上传 GitHub
REM ============================================================

REM -------------------------
REM 设置源码根目录
SET ROOT_DIR=D:\Git\MeshSmoothing

REM -------------------------
REM 设置构建目录（可修改为任意路径，仓库外推荐）
SET BUILD_DIR=D:\Git\build

REM -------------------------
REM 设置构建类型（Release 或 Debug）
SET BUILD_TYPE=Release

REM -------------------------
REM 创建 build 目录（如果不存在）
IF NOT EXIST "%BUILD_DIR%" (
    mkdir "%BUILD_DIR%"
)

cd /d "%BUILD_DIR%"

REM -------------------------
REM 可选：清理旧的 CMake 缓存和 CMakeFiles
IF EXIST CMakeCache.txt (
    echo Removing old CMake cache...
    del /q CMakeCache.txt
)
IF EXIST CMakeFiles (
    rmdir /s /q CMakeFiles
)

REM -------------------------
REM 配置项目
echo Configuring project with CMake...
cmake -DCMAKE_BUILD_TYPE=%BUILD_TYPE% "%ROOT_DIR%"

REM -------------------------
REM 构建项目
echo Building project (%BUILD_TYPE%)...
cmake --build . --config %BUILD_TYPE%

REM -------------------------
echo.
echo Build finished!
pause
