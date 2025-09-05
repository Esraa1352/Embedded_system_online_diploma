/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of data (1–100): ");
    fflush(stdout);
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Please enter a number between 1 and 100: ");
        fflush(stdout);
        scanf("%d", &n);
    }

    float arr[100];
    float sum = 0;


    for (int i = 0; i < n; i++)
    {
    	printf("%d:Enter number:\n", i+1);
    	fflush(stdout);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;
    printf("Average is: %.2f\n", average);

    return 0;
}
*/
