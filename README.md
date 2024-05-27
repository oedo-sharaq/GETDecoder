## Installation
* GETDecoder depends on [YAML-CPP](https://code.google.com/p/yaml-cpp/) >=0.6.3 for loading steering and histgrum definition files. Please install it in advance as a shared object. (You have to cmake with -DYAML_BUILD_SHARED_LIBS=ON, -DBUILD_TESTING=OFF)
(sudo apt install libyaml-cpp-dev works on recent ubuntu)

```
mkdir build; cd build
cmake .. -DCMAKE_INSTALL_PREFIX=[your_installation_dir]
make
make install
```

* find_package will find your yaml-cpp installation automatically if it's properly configured. If cmake failed to find one, however, add -DCMAKE_PREFIX_PATH=[path_to_yaml-cpp_installation] option to the cmake command.
