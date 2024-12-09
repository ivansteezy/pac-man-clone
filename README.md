# My attempt of Pacman

This is a scholar project, is a Pacman clone, that's it :)

# Build

## Linux
You need to install sfml on your system:

`sudo apt-get install libsfml-dev`

Then from the root of the project:

`mkdir build`

`cd build`

`cmake --build .`


## Windows
It is recommended to use vcpkg, so from the root of the project you only need

`vcpkg install`

and that's the onli dependency, then you need to copy the following dlls to the path where the executable is.

- sfml-audio-d-2.dll
- sfml-graphics-d-2.dll
- sfml-network-d-2.dll
- sfml-system-d-2.dll
- sfml-window-d-2.dll
