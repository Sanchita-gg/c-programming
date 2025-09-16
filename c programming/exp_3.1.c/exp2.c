#include <stdio.h>

int main()
 {
    float weight , height , bmi;

    printf("Enter weight in kilograms: \n");
    scanf("%f", &weight);

    printf("Enter height in meters: \n");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("YOUR BMI IS : %f\n", bmi);
    printf("Category: ");

    if (bmi < 15.0)
        printf("Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Ideal\n");
    else if (bmi >= 25.0 && bmi <= 25.9)
        printf("Overweight\n");
    else if (bmi >= 30.0 && bmi <= 39.9)
        printf("Obese\n");
    else if (bmi >= 40.0)
        printf("Morbidity Obese\n");
    else
        printf("Not categorized by the given ranges\n");

    return 0;
}