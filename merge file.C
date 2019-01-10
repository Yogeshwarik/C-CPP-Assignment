#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1, *fp2, *fp3;
	char ch, fname1[20], fname2[20], fname3[30];

	printf("\n\n Merge two files and write it in a new file :\n");
	printf("enter the 1st file name : ");
	scanf("%s",fname1);
	printf("enter the 2nd file name : ");
	scanf("%s",fname2);
	printf("enter the new file name where to merge the above two files : ");
	scanf("%s",fname3);
	fp1=fopen(fname1, "r");
	fp2=fopen(fname2, "r");
	if(fp1==NULL || fp2==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	fp3=fopen(fname3, "w");
	if(fp3==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch, fp3);
	}
	while((ch=fgetc(fp2))!=EOF)
	{
		fputc(ch, fp3);
	}
	printf("The two files merged into %s file successfully..!!\n\n", fname3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	getch();
}
