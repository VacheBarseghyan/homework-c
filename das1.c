#include <stdio.h>

int main()
{
	char letter;

	printf("Enter a letter: ");
	scanf("%c", &letter);

	if(letter >= 'a' && letter <='z' || letter >= 'A' && letter <= 'Z'){
		if(letter == 'a' || letter == 'A' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u'){
			printf("%c is a vowel.\n",letter);
		       }else{
			 printf("%c is a consonant.\n",letter);
		       }
		      }else{
			printf("Invalid input.Please enter a valid letter.\n");
		      }
	return 0;
}
