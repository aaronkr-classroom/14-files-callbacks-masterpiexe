#include <stdio.h>

int main()
{
	char* string = "World,Hello";
	short int data = 0xAEFC;

	FILE* p_file = fopen("hello.txt", "wt");
		if(NULL!=p_file)
			{
				fprintf(p_file,"%s\n", string);
				fprintf(p_file," %x\n", data);
				
				
				
				fclose(p_file);

			}

}