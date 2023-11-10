#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main() {

    double wavelength_green = 530.0;
    double order_green = 3.0;
    double angle_green = 65.0 * pi / 180.0;

    double wavelength_red = 700.0;
    double order_red = 2.0;

    double grating_spacing = (order_green * wavelength_green) / sin(angle_green);

    double angle_red = asin((order_red * wavelength_red) / grating_spacing);

    angle_red = angle_red * 180.0 / pi;

    printf("The angle for the second-order bright spot for red light is %.2f degrees.\n", angle_red);

    return 0;
}
