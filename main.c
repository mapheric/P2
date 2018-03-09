#include "my.h"

FILE *fp;

int main(int argc, char *argv[]) {


int arrayLength = 0;
fp = fopen(argv[1], "r"); //opens file


fscanf(fp, "%d", &arrayLength); //reads first number, creates arrayLength
int *newFile;
newFile = (int*)calloc(arrayLength, sizeof(int));  //reserve the file space



int i;
for(i=0; i<arrayLength; i++)		//////Copy file into array
{
	fscanf(fp, "%d", &newFile[i]);
}

fclose(fp);  //close file

sort(newFile, arrayLength); //Sort, calling sort method

display(newFile, arrayLength);

	return 0;

}


