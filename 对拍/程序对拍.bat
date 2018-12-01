@echo off
:loop
    rand.exe %random% > in.txt
    std.exe < in.txt > stdout.txt
    my.exe < in.txt > myout.txt
    fc myout.txt stdout.txt
if not errorlevel 1 goto loop
pause
goto loop
