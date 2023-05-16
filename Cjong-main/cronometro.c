/* Infelizmente essa parte do código não foi integrada ainda */

#include <conio.h>
#include <stdio.h>
#include <wchar.h>
#include <windows.h>


void cronometro(int dificuldade) {
    
    for(float time = 240*dificuldade ; time > 0; time = time - 0.1){
    wprintf(L"%.1f\n",time);
    Sleep(100);
    }}

void main (){
    _setmode(_fileno(stdout), 0x00020000);
    cronometro(2);
}




