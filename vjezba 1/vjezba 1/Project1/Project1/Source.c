#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#define MAX_SIZE 50
#define MAX_LINE 1024

typedef struct _student {
	char name[MAX_SIZE];
	char surname[MAX_SIZE];
	double points;
}Student;
int main() {
	int noRows = 0;
	FILE* filePointer = NULL;
	char buffer[MAX_LINE] = { 0 };
	filePointer = fopen("l.txt.txt", "r");
	if (!filePointer) {
		printf("klrivo");
		return -1;

	}
	while (!feof(filePointer)) {
		fgets(buffer, MAX_LINE, filePointer);
		noRows++;


	}
	printf("%d", noRows);
	fclose(filePointer);
	filePointer = malloc(noRows * sizeof(Student));
	return 0;

}