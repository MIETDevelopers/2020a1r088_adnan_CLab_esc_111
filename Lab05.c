#include <stdio.h>
#define pi 3.14

float areaSquare(float side)
{
	return side*side;
}

float areaRectangle(float length, float width)
{
	return length*width;
}

float areaCircle(float radius)
{
	return pi*radius*radius;
}

int main()
{
	float area;
	float circumference;
	float perimeter;
	float perimeter2;
	float radius, side, length, width;
	int choice;
	char repeat;

				printf("Enter radius:\n");
				scanf("%f", &radius);
				area = areaCircle(radius);
				circumference = 2 * pi * radius;
				printf("area of circle = %f",area);
				printf(" , circumference of circle = %f\n",circumference);
			
				printf("Enter side:\n");
				scanf("%f", &side);
				area = areaSquare(side);
				perimeter = 4 * side;
				printf("area of square = %f",area);
				printf(" , perimeter of square = %f\n",perimeter);
				
				printf("Enter length:\n");
				scanf("%f", &length);
				printf("Enter width:\n");
				scanf("%f", &width);
				area = areaRectangle(length, width);
				perimeter2 = 2 * length * width  ;
				printf("area of rectangle = %f",area);
				printf(" , perimeter of the rectangle = %f",perimeter2);
			
			


	return 0;
} 

