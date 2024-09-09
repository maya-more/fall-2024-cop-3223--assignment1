#include <stdio.h>
#include <math.h>

//gcc fracturing.c -lm && ./a.out

double calculateDistance() {

    //initialize variable with user input
    double x1;
    double x2;
    double y1;
    double y2;

    printf("\nEnter point x1: ");
    scanf("%lf", &x1);

    printf("Enter point y1: ");
    scanf("%lf", &y1);

    printf("Enter point x2: ");
    scanf("%lf", &x2);

    printf("Enter point y2: ");
    scanf("%lf", &y2);

    //print point 1 and 2
    printf("Point #1: x1 = %lf; y1= %lf\n", x1, y1);
    printf("Point #2: x2 = %lf; y2= %lf\n", x2, y2);

    //caculating distance and initializing 
    double x_value = x2 - x1;
    double y_value = y2 - y1;
    double pow_x_value = pow(x_value, 2);
    double pow_y_value = pow(y_value, 2);
    double sub_values = pow_x_value + pow_y_value;
    double distance = sqrt(sub_values);
    printf("%lf \n", distance);
}

int main(int argc, char** argv) {
    calculateDistance();
    return 0;
}
