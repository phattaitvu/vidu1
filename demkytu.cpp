#include<stdio.h>
#include<string.h>
#include<ctype.h>
void demkt(char s[]);
int main()
{
	char hoten[20];
	printf("\n Nhap ho ten: ");
	gets(hoten);
	printf("\n Ho ten vua nhap la: ");
		puts(hoten);
		demkt(hoten);
return 0;}

void demkt(char s[])
{ char k, k1;
  int n=strlen(s), dem=0;
printf("\n Nhap ky tu: ");
scanf("%c",&k);
fflush(stdin);
strupr(s);
for(int i=0; i<n;i++)
	{
	if(s[i]==toupper(k))
 		dem++;
 	}
 	printf("\n So ky tu %c co trong chuoi hoten la %d",k,dem);
}


