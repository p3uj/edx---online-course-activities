#include <stdio.h>
int main(void)
{
	char word[51];
	int length = 0;
	int i,found, maxindex;

	scanf("%s", word);
	
	while (word[length]!='\0')
	    length++;
	if (length%2==0)
	    maxindex = length/2-1;
	else
	    maxindex = length/2;
	
	i = 0;
	found = 0;
	while (!found && i < length) {
		if (word[i]=='t' || word[i]=='T') found++;
		else i++;
	}

	if (!found) 
	    printf("-1");
	else if (i <= maxindex) printf("1");
	else printf("2");

	return 0;
}
