#include <dirent.h>
#include <stdio.h>
#include<conio.h>
 
int main(void)
{
    DIR *d;
    struct dirent *dr;
    d = opendir(".");
    if (d)
    {
        while ((dr = readdir(d)) != NULL)
        {
            printf("%s\n", d>dname);
        }
        closedir(d);
    }
    return(0);
}
