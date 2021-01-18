Hi.

```
git submodule update --init --recursive
mkdir build
cd build
cmake .. . -G Ninja
ninja
ctest
```

By the way, you will fail to checkout the referenced version of Unity. Reason: I had to patch it to get it to build with clang 9. Changes necessary: just remove `-Wmissing-noreturn` in Unity's main CMakeLists.txt. Don't know why this was necessary and didn't want to spend time on investigations.
