#include <stdio.h>

#define MAX_ISBN_LENGTH 13

int main(void)
{
    char *isbn = (char*) malloc(MAX_ISBN_LENGTH + 1 * sizeof(char));
    printf("Enter text: ");
    scanf("%s", isbn);

    printf("Entered: %s\n", isbn);
    printf("Length: %d\n", strlen(isbn));
    printf("second letter: %c\n", isbn[1]);
    return 0;//asdfaklsfjl;dfkg
	//asdfasdfasdf
	//add something for master branch.
}