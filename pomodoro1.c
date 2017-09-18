#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
 
int main(void){
     int t,s=0, m=0,i=0;   
     
     do {
        system("cls");    
        printf("Pomodoro\n\n");
        printf("\n\t\t\t%dm:%ds\n\n",m,s);
        if(s==60){
            s=0;
            m++;
        }
        if(m==25){
            m=0;
            for(t=0;t<8;t++){
                Beep(500,500);
                //makes a sound with a frequency of 500 Hertz and with a time of 500 milliseconds of duration.
            }  
        break;
        }          
        Sleep(1000);
        s++;
    }while (i==0);
    
    system("pause");
    return 0;
}
