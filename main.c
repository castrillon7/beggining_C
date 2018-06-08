#include <stdio.h>
#include <stdlib.h>

// Get that cool delta banner
char get_banner()
{
    return (char) "\n"
               "         x          Productions\n"
               "        xxx         =============================================================\n"
               "       xx xx        000 0    0   0  0     0  000  0    0     0     0 0 0 0  000  \n"
               "      xx   xx        0  0    0   0  0 0 0 0   0   00   0    0 0       0      0   \n"
               "     xx     xx       0  0    0   0  0  0  0   0   0 0  0   0   0      0      0   \n"
               "    xx   O   xx      0  0    0   0  0     0   0   0  0 0  0 0 0 0     0      0   \n"
               "   xx         xx    000 0000 00000  0     0  000  0    0 0       0    0     000  \n"
               "  xxxxxxxxxxxxxxx   =============================================================\n\n";
}

// Function to do maldade
float get_celsius( float temperature)
{
    return 5.0 * (temperature - 32.0) / 9.0;
}

int main()
{
//    printf(get_banner(), "%s");

    int temperature;
    printf("Enter the temperature in fahrenheit: ");
        scanf("%d", &temperature);

    printf("%f", get_celsius(temperature));

    return 0;
}
