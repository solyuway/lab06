# Lab06 - CPack Packaging

[![CPack Packaging](https://github.com/solyuway/lab06/actions/workflows/cpack.yml/badge.svg)](https://github.com/solyuway/lab06/actions)

## 📦 Packages

| Platform | Formats |
|----------|---------|
| Linux | DEB, RPM, TGZ |
| macOS | DMG, TGZ |
| Windows | MSI, ZIP, TGZ |

## 🔧 Build

```bash
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=_install
cmake --build .
cpack -G TGZ
