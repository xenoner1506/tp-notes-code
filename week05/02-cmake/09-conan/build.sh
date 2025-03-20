conan profile detect --force
conan install . --output-folder=build --build=missing

cd build
cmake .. -G Ninja -DCMAKE_TOOLCHAIN_FILE="conan_toolchain.cmake" -DCMAKE_BUILD_TYPE=Release
ninja
