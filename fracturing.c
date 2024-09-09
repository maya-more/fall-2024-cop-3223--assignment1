#include <stdio.h>
#include <math.h>

//gcc fracturing.c -lm && ./a.out
//Maya Moreira UCFID 5642105


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
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2= %lf\n", x2, y2);

    //caculating distance and initializing 
    double x_value = x2 - x1;
    double y_value = y2 - y1;
    double pow_x_value = pow(x_value, 2);
    double pow_y_value = pow(y_value, 2);
    double sub_values = pow_x_value + pow_y_value;
    double distance = sqrt(sub_values);
    printf("\nThe distance between the two points is %lf", distance);

    return distance;
}

/*

//perimeter function
double calculatePerimeter() {
    double perimeter = 0;
    perimeter = calculateDistance();
    printf("\nThe perimeter of the city encompassed by your request is %lf", perimeter);
    return 3.0;
}

//perimeter function
double calculatePerimeter() {
    double perimeter = 0;
    perimeter = calculateDistance();
    printf("\nThe perimeter of the city encompassed by your request is %lf", perimeter);
    return 3.0;
}

//calculate area function

double calculateArea() {

    return 2;
}

*/



double calculateWidth() {
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
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2= %lf\n", x2, y2);

    //calculate width
    double width = x2 - x1;

    printf("\nThe width of the city encompassed by your request is %lf", width);

    return 1;
}

double calculateHeight() {
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
    printf("Point #1 entered: x1 = %lf; y1= %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2= %lf\n", x2, y2);

    //calculate width
    double height = y2 - y1;

    printf("\nThe height of the city encompassed by your request is %lf", height);

    return 1;
}


int main(int argc, char** argv) {
    calculateHeight();
    calculateWidth();
    calculateDistance();
    //calculatePerimeter();
    //calculateArea();
    return 0;
}


