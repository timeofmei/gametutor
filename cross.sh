#!/bin/sh

i686-w64-mingw32-c++ --std=c++20 -fpermissive -Ix86_include -Iinclude ./src/*.cpp -Lx86_lib -static -lmingw32 -lSDL2main -lSDL2.dll -lSDL2_image.dll -o main

rm assets/.DS_Store
zip game.zip -rq assets main.exe
mv game.zip ~/Desktop/game.zip
rm main.exe
