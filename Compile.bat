@echo off
g++ -c main.cpp -o main.o
g++ main.o -o run.exe

run.exe
pause