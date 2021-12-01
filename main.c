#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *myFile;
    myFile = fopen("numbers.txt", "r");

    //read file into array
    int numberArray[2000];
    int i;

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 2000; i++){
        fscanf(myFile, "%d,", &numberArray[i] );
    }

    for (i = 0; i < 2000; i++)
        {if (numberArray[i] > numberArray [i - 1] numberArray[i] > numberArray[i + 1])
}
        printf(numberArray[i]);

    fclose(myFile);

    return 0;
}
