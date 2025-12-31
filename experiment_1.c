1. Installation of VS Code & GCC and Execution of First C Program

Installation Steps:

1. Download VS Code: Install from code.visualstudio.com.

2. Install C/C++ Extension: Open VS Code, go to the Extensions view (Ctrl+Shift+X), search
for "C/C++" by Microsoft, and install it.

3. Install GCC (MinGW):

. Download MinGW-w64.

. Run the installer and ensure mingw32-gcc-g++ is selected.

. Add the bin folder of your MinGW installation to your system's Path environment
variable.

4. Verify: Open Command Prompt and type gcc -- version
 
  #include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
