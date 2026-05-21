# Lab06 - CPack Packaging with GitHub Actions

## 🚀 Build Status

[![CPack Packaging](https://github.com/solyuway/lab06/actions/workflows/cpack.yml/badge.svg)](https://github.com/solyuway/lab06/actions/workflows/cpack.yml)

## 📦 Packages

При создании тега `v*` автоматически собираются пакеты:

| Платформа | Форматы |
|-----------|---------|
| Linux | DEB, RPM, TGZ |
| macOS | DMG, TGZ |
| Windows | MSI, ZIP, TGZ |

## 🔧 Local build

```bash
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=_install
cmake --build .
cpack -G TGZ
