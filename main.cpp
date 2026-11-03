#include <iostream>

using namespace std;

int main()
{
    double radius;
    double area;
    const double pie=3.14;
    printf("Enter the radius of the sphere:");
    scanf("%lf",&radius);
    area=4*pie*radius*radius;
    printf("The surface area of the sphere is equal to:%2lf",area);
    return 0;
}
