#include "my.h"
void sort(int newFile[], int arrayLength)
{
	int check = 0;
	while(check == 0)
{
	check = 1;
	int i;

	//Sort evens, swap
	for(i =0; i<arrayLength-1; i+=2)
	{
		if(newFile[i] > newFile[i+1])
		{
			int temp = newFile[i];
			newFile[i] = newFile[i+1];
			newFile[i] = temp;
			check = 0;
		}
	}
	//Sort odds, and swap
	for(i =1; i<arrayLength-1; i+=2)
	{
		if(newFile[i] > newFile[i+1])
		{
			int temp = newFile[i];
			newFile[i] = newFile[i+1];
			newFile[i] = temp;
			check = 0;
		}
	}
}
}