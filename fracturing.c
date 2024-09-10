#include <stdio.h>
#include <math.h>

//gcc fracturing.c -lm && ./a.out
//Maya Moreira UCFID 5642105


double calculateDistance() {

    //initialize variables with user input
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

    //caculates distance and initializes distance var 
    double x_value = x2 - x1;
    double y_value = y2 - y1;
    double pow_x_value = pow(x_value, 2);
    double pow_y_value = pow(y_value, 2);
    double sub_values = pow_x_value + pow_y_value;
    double distance = sqrt(sub_values);

    //print and return distance
    printf("\nThe distance between the two points is %lf \n", distance);
    return distance;
}


double calculatePerimeter() {

    //calls on distance funct to find distance between first 2 points
    double perimeter = 0;
    int another_point = 1;
    perimeter = calculateDistance();

    //asks users for more points
    printf("\nDo you have another point? Enter 1 if yes and 0 if not: ");
    scanf("%d", &another_point);

    //adds distance between points together until there are no more points
    while (another_point == 1) {
        perimeter = perimeter + calculateDistance();
        printf("\nDo you have another point? Enter 1 if yes and 0 if not: ");
        scanf("%d", &another_point);
    }
 
    printf("\nThe perimeter of the city encompassed by your request is %lf \n", perimeter);
    return 3.0; 
}

//calculate area function assuming city is rectangle shape
double calculateArea() {

    //gather information on the cities 2 sides
    printf("\nEnter coordinates of the cities first side.");
    double side1 = calculateDistance();
    printf("\nEnter coordinates of the cities second side.");
    double side2 = calculateDistance();

    //mulitply the distances together
    double area = side1 * side2;

    printf("\nThe area of the city encompassed by your request is %lf \n", area);
    return 2.0;
}

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
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateHeight();
    calculateWidth();
    return 0;
}