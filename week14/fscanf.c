#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int num_arr[10] = {412,413,414,415,416,417,418,419,420,421};

	FILE* p_file = fopen("nums.txt", "rt");
	
	if (NULL != p_file)
	{
		for (int i = 0; i < 10; i++)
		{
			fprintf(p_file, "%d\n", num_arr[i]);
		}
		
		
		while (EOF != fscanf(p_file, "%d",&num))
		{
			printf("%d", num);
		}
		fclose(p_file);
	}
}