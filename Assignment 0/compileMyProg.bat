@echo off
path C:\MinGW\bin\;C:\MinGW\libexec\gcc\mingw32\5.3.0;%path%
g++ %1.cpp -o %1.exe
echo on


