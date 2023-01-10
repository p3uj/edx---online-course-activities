#include<stdio.h>

int main()
{
	int number, i, length = 0, longestLength = 0;
	char word[101];

	scanf("%d", &number);
	for (i = 0; i < number; i++){
		scanf("%s", word);
		while (word[length] != '\0')
			length++;
		if (length > longestLength)
			longestLength = length;
	}
	printf("%d\n", longestLength);
	return 0;
}
