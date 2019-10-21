#include <stdio.h>
/* This is my favorite C snippet
 *it is a demonstration that array indexes are literally just syntactic sugar
 *This blew my mind the first time I saw it. 
*/

int main(){
	char letters[] = "abcdefghijklmnop";
	int i = 0;
	while ( i < sizeof(letters)/sizeof(char) ){
		printf("the letter from the array index is: %c\n", letters[i]);
		printf("the letter from the pointer addition is: %c\n", *(letters + i));
		i++;
	}
}
