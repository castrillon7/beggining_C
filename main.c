#include <stdio.h>
#include <stdlib.h>

// Function to do maldade
int get_celsius( int temperature)
{
//    printf("Maldade has been done! :) \n");
    return (5/9 * temperature - 32);
}

int main() {
//    printf("\n"
//           "         x          Productions\n"
//           "        xxx         =============================================================\n"
//           "       xx xx        000 0    0   0  0     0  000  0    0     0     0 0 0 0  000  \n"
//           "      xx   xx        0  0    0   0  0 0 0 0   0   00   0    0 0       0      0   \n"
//           "     xx     xx       0  0    0   0  0  0  0   0   0 0  0   0   0      0      0   \n"
//           "    xx   O   xx      0  0    0   0  0     0   0   0  0 0  0 0 0 0     0      0   \n"
//           "   xx         xx    000 0000 00000  0     0  000  0    0 0       0    0     000  \n"
//           "  xxxxxxxxxxxxxxx   =============================================================\n\n");

    int temperature;
    printf("Enter the temperature in fahrenheit\n");
        scanf("temperature, %d");

    printf(get_celsius(temperature));
    return 0;
}
