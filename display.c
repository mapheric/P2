#include "my.h"
void display(int newFile[], int arrayLength)
{
	int position; 
	while (1)
	{
		scanf("%d", &position);
		if (position == -1) break; 
		if (position > -1 && position < arrayLength) {
			printf("%d\n", newFile[position]);
		}
		else {
			printf("Invalid index");
		}

	} 
	
}
