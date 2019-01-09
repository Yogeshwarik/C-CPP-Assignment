#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char fname[10];
    char ch;
    int dline, temp=1;
	printf("Enter file name: ");
    scanf("%s",fname);
    fp1=fopen(fname, "r");
    ch=getc(fp1);
   while(ch!=EOF)
    {
	printf("%s",ch);
	ch=getc(fp1);
    }
    rewind(fp1);
    printf("Enter line number of the line to be deleted:");
    scanf("%d",&dline);
    fp1= fopen("student.txt", "w");
    ch = 'A';
    while (ch != EOF)
    {
	ch = getc(fp1);
	if (temp!=dline)
	{
	    putc(ch,fp2);
	}
	if(ch=='\n')
	{
	    temp++;
	}
    }
    fclose(fp1);
    fclose(fp2);
    remove(fname);
    rename("student.txt", fname);
    printf("The contents of file after being modified are as follows:\n");
    fp1 = fopen(fname, "r");
    ch=getc(fp1);
    while(ch!=EOF)
    {
	printf("%s", ch);
	ch = getc(fp1);
    }
    fclose(fp1);
    getch();
}
