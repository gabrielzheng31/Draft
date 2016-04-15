/*#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	float sum = 0.0;
	for (i = 1; i <= n; i++)
	{
		int j;
		float total = 1.0;
		for (j = 1; j <= i; j++)
		{
			total *= j;
		}
		sum += total;
	}
	printf("%f", sum);
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	char ch;
	int engofnum=0, numofnum=0, elsenum=0, blankofnum=0;
	while ((ch = getchar()) != '\n')
	{
		if(ch<='z'&&ch>='a'||ch<='Z'&&ch>='A')
			engofnum++;
		else if(ch == ' ')
			blankofnum++;
		else if(ch>='0'&&ch<='9')
			numofnum++;
		else
			elsenum++;
	}
	printf("%d %d %d %d", engofnum, numofnum, blankofnum, elsenum);
	return 0;
}*/

#include <stdio.h>

int main(void)
{
	int i, n, total = 1;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		total += 1;
		total *= 2;
	}
	printf("%d", total);
}

/*#include <stdio.h>

int main(void)
{
	register int sdplo;
	printf("%d", );

}*/