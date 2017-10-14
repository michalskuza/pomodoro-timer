#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

/* This function clears the screen.
 */
void clear() {
        for (int x = 0; x < 100; x++)
                printf("\n");
}

int main(void){
     int minutes = 0;
     int seconds = 0;
     int time_finished = 0;

     while (time_finished != 1) {
        clear();
        printf("Pomodoro %dm:%ds\n", minutes, seconds);

        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }

        if (minutes == 25) {
            time_finished = 1;

            /* Makes a sound with 500 Hertz a 500 ms long. */
            for (int times = 0; times < 8; times++) {
#ifdef _WIN32
                Beep(500,500);
#else
                /* TODO */
#endif
            }

        }

#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif

        seconds++;
    }

    char a = fgetc(stdin);

    return 0;
}
