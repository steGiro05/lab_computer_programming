@echo off

REM Run the commands and redirect output to output.txt and errors to err.txt

a.exe --max 4 8 2 15 7 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --sum 3 5 1 2 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --product 2 4 6 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --average 10 20 30 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --max -1 -4 -9 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --sum -5 10 20 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --product -2 4 -6 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --average -5 -10 -15 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --max 1.5 2.7 3.3 4.1 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --sum 1.1 2.2 3.3 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --product 1.1 2.2 3.3 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --average 2.5 3.5 5.5 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --max 5 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --sum 5 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --product 5 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --average 5 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --median 5 10 15 >> output.txt 2>> err.txt
echo. >> output.txt

a.exe >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --sum 4 5 a >> output.txt 2>> err.txt
echo. >> output.txt

a.exe --average >> output.txt 2>> err.txt
echo. >> output.txt

pause
