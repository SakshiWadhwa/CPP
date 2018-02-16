#include<stdio.h>
#include<string.h>

int main(  void )
{
	char s[] = "afksngdgkgbcgffbghpoiuytrewasdfghjkl,mnbvcxzaqwertyuioplkmjnhgfdcxfnds";
	char y[1000] = "abcdsgfr4ewfdscvfbgytbgfvghyjuiujukiloikujhygbfvdfvgbhjkil.k,jmhnbfvcxdsgmfsnmawsefgrthjertyhj";
	
	printf("strlen: %u\n", strlen(s));
	printf("size: %u\n", sizeof(s));
	
	int big = strcmp(s, y);
	printf("compare: %d\n", big);
	
	strcat(y, s);
	printf("cocatenate: %s\n", y);
	printf("size after concatenate: %u\n", sizeof(y));
}
