#include<stdio.h>
int main()
{
	int data = 0x00000412,
		data2 = 100,
		data_list[5] = { 0,1,2,3,4 };
	FILE* p_file = fopen("jin.data", "w");
	if (NULL != p_file)
	{
		fwrite(&data, sizeof(int), 1, p_file);
		fwrite(&data2, sizeof(int), 1, p_file);
		//fwrite(data_list, sizeof(int), 5, p_file);
		//fwrite(data_list, sizeof(int) * 5, 1, p_file);
		fwrite(data_list, sizeof(data_list), 1, p_file);
		fclose(p_file);
	}
}