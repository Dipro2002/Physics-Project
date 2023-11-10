#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    int order;
    double theta, d;

    printf("Enter the order of the diffraction pattern: ");
    scanf("%d", &order);
    printf("Enter the angle in degrees (theta): ");
    scanf("%lf", &theta);
    printf("Enter the slit separation in micrometers (d): ");
    scanf("%lf", &d);

    d = d * 1e-6;
    double wavelength = (d  * sin(theta * (PI / 180.0))) / order;
    wavelength = wavelength * 1e9;

    printf("\na. Wavelength: %.2f nm\n", wavelength);

    if (wavelength >= 380 && wavelength < 450) {
        printf("b. Color: Violet\n");
    } else if (wavelength >= 450 && wavelength < 485) {
        printf("b. Color: Blue\n");
    } else if (wavelength >= 485 && wavelength < 500) {
        printf("b. Color: Cyan\n");
    } else if (wavelength >= 500 && wavelength < 565) {
        printf("b. Color: Green\n");
    } else if (wavelength >= 565 && wavelength < 590) {
        printf("b. Color: Yellow\n");
    } else if (wavelength >= 590 && wavelength <= 625) {
        printf("b. Color: Orange\n");
    }else if (wavelength >= 590 && wavelength <= 625) {
        printf("b. Color: Red\n");
    }else {
        printf("b. Color: Outside visible spectrum\n");
    }

    return 0;
}

