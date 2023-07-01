#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#define clrscr() printf("\ee[1;1H\e[2J")
#define CYCLE  60

// Define color codes using ANSI escape sequences
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
int main() {
    int hours, minute, second;
    printf(RED "Enter your hours minute second \n");
    scanf("%d %d %d", &hours, &minute, &second);
    clrscr();
    int h = 0, m = 0, s = 0;
    while (1) {

        printf(BLUE "%.2d:%.2d:%.2d \n", h, m, s);
        if (h == hours && m == minute && s == second) {
            break;
        }
        sleep(1);
        s++;
        if (s == CYCLE) {
            m++;
            s = 0;
        }

        if (m == CYCLE) {
            h++;
            m = 0;
        }

    }

    return 0;
}
