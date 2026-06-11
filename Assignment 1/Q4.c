#include<stdio.h>
void main()
{
	char c = 'Y';
	if ( c == 'a'|| c == 'A'||c == 'e'||c == 'E'|| c == 'i'|| c == 'I'||c == 'o'|| c == 'O'||c == 'U'||c == 'u')
	printf(" %c is a vowel",c);
	else{
		printf("%c is a consonant",c);
	}
	
}