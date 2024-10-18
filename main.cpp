#include <cstdlib>
#include <windows.h>
#include <iostream>
using namespace std;
int MAIN_FUNC() {
    while (true) {
               if (GetAsyncKeyState(VK_NUMPAD9) & 0x8000) {
            system("powershell -Command \"Disable-NetAdapter -Name 'Ethernet' -Confirm:$false\"");
            cout << "Ethernet disabled.\n";
            Sleep(1000); 
        }
        else if (GetAsyncKeyState(VK_NUMPAD8) & 0x8000) {
            system("powershell -Command \"Enable-NetAdapter -Name 'Ethernet' -Confirm:$false\"");
            cout << "Ethernet enabled.\n";
            Sleep(1000);  
        }
                else if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            cout << "Exiting program...\n";
            return 0;
        }
        Sleep(100); 
    }
}

int main() {
    MAIN_FUNC();
    return 0;
}
