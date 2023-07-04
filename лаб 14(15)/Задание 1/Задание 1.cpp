#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

	float* ptr, sum = 0.0;
	int i, n, min = 0, null = 0;

	printf("Input size of massiv, n<30: \n");
	scanf_s("%d", &n);
	ptr = (float*)malloc(n);

	for (i = 0; i < n; i++)
	{
		printf("Input element %d\n", i + 1);
		scanf_s("%f", ptr + i);

		if (ptr[i] == 0)
		{
			null++;
		}
	}

	printf("The number of array elements equal to 0: %d", null);

	for (i = 1; i < n; i++)
	{
		if (ptr[min] > ptr[i])
		{
			sum = 0.0;
			min = i;
		}
		else
		{
			sum += ptr[i];
		}
	}

	printf("\nSumm after %d element = %.1f\n", min + 1, sum);

	return 0;
	free(ptr);


}