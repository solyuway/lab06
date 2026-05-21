# Lab06 - CPack Packaging

[![CPack Packaging](https://github.com/solyuway/lab06/actions/workflows/cpack.yml/badge.svg?branch=master&v=2)](https://github.com/solyuway/lab06/actions/workflows/cpack.yml)

## 📦 Packages

| Platform | Formats |
|----------|---------|
| Linux | TGZ, DEB |
| macOS | TGZ |
| Windows | ZIP, TGZ |

## 🔧 Local build

mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=_install
cmake --build .
cpack -G TGZ

## 📝 Create release

git tag v0.1.0.3
git push origin --tags

## 📄 License

MIT
