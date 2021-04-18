:: @brief Find the newest .c file in a folder and compile it with gcc
:: @author Decameron
:: my_path = the path to gcc executable

@echo off
for /f "delims=" %%f in ('dir /b /a-d /od /tw %cd%\*.c') do (
  set file=%%f
)

echo The newest file is: %file%
echo Compiling %file% with GCC...
call %my_path%\gcc.exe ^
  -Wall -Wmissing-prototypes -Wextra -O2 -std=c90 -ggdb3 %file%