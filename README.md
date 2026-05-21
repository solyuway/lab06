# Lab06 - CPack Packaging

## Description

Static C++ library for printing.

## Version



## Build and Package

```bash
mkdir build && cd build
cmake ..
cmake --build .
cpack -G "TGZ"  # или DEB, RPM, etc.
```

## License

MIT
