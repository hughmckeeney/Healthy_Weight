
//Written by Hugh Mc Keeney 

//bmi calculator to determine if a person is underweight, normal or overweight

#include <stdio.h>


int BMICalculator(double weight, double height);

int main(void)
{
	double weight;
	double height;
	printf("This is a program to determine if a person is overweight, normal or underweight\n");
	printf("Enter the weight of the person in kg\n");
	scanf("%lf", &weight);
	printf("Enter the height of the person in cm\n");
	scanf("%lf", &height);
	// Above I am asking for the weight and height of the person so the BMICalculator can run
	
	if(BMICalculator(weight, height) == 2)
	{
		printf("The person is overweight");
	}
	else if(BMICalculator(weight, height) == 1)
	{
		printf("The person is underweight");
	}
	else if(BMICalculator(weight, height) == 0)
	{
		printf("The person is ok");
	}
	
	
}

int BMICalculator(double weight, double height)
{
	double BMI; // A varible to store the person's BMI
	double height2; // A variable I created to store height squared
	
	height = height / 100; // Converting height from cm to meters
	
	height2 = height * height; 
	BMI = weight / height2;
	
	if(BMI <= 18.5)
	{
		return 1; // Determining if the person is underweight
	}
	
	if(BMI > 18.5 && BMI <= 24.9)
	{
		return 0; // Determining  if the person is ok
	}
	
	if(BMI >= 25)
	{
		return 2; // Determining is the person is overweight
	}
	return 0;
}
	
	
	