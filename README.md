# Lab06 - CPack Packaging

[![CPack Packaging](https://github.com/solyuway/lab06/actions/workflows/cpack.yml/badge.svg)](https://github.com/solyuway/lab06/actions/workflows/cpack.yml)

## 📦 Packages

| Platform | Formats |
|----------|---------|
| Linux | TGZ, DEB, RPM |
| macOS | TGZ, DMG |
| Windows | TGZ, ZIP |

## 🔧 Local build

```bash
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=_install
cmake --build .
cpack -G TGZ
cpack -G DEB
cpack -G RPM
