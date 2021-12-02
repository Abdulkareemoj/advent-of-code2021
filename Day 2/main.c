#include <stdio.h>
#include <stdlib.h>
struct {int x,z,aim;} sub;
int main(){
    FILE* input;
    char c;
    int t;

input = fopen("../numbers.txt", "r");

while (1) {
	c = fgetc(input);

	if (c == 'f') {
		fseek(input, 7, SEEK_CUR);
		fscanf(input, "%d", &t);
		sub.x += t;
		sub.z += t * sub.aim;
	} else if (c == 'u') {
		fseek(input, 2, SEEK_CUR);
		fscanf(input, "%d", &t);
		sub.aim -= t;
	} else if (c == 'd') {
		fseek(input, 4, SEEK_CUR);
		fscanf(input, "%d", &t);
		sub.aim += t;
	} else {
		break;
	}

	fseek(input, 1, SEEK_CUR);
}

fclose(input);
printf("%d\n", sub.x * sub.z);

return 0;
