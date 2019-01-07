#include<stdio.h>
void mergesort(int *, int);
void merge(int *, int * , int * , int ,int );
int comp=0,n;
void ascending(int a[])
{
   int i;
   for(i=0;i<n;i++)
   a[i]=i+1;
}   

void descending(int a[])
{
   int i,j=0;
   for(i=n-1;i>=0;i--)
   a[j++]=i+1;
}

void variable(int a[])
{
   int i;
   for(i=0;i<n;i++)
   a[i]=random()%20000;
}

void show(int a[])
{
   int i;
   for(i=0;i<n;i++)
   printf("%d",a[i]);
}
int main()
{
int ch, a[10];
   while(1)
   {
     comp=0;
   
     printf("enter your choice\n");
     printf(" \n1.ascending \n2.descending \n3.random \n4.exit\n");
     scanf("%d",&ch);
     if(ch==4)
     {
        return 0;
     }
     switch(ch)
     {
        case 1:printf("enter the num of elements\n");
                scanf("%d",&n);
                ascending(a);
                printf("the ascending elements are\n");
                show(a);
                 mergesort(a,n);
                printf("after the sorting ele are\n");
                  show(a);
                printf("the total num of comparisions %d",comp);
                
                
                break;
                
                
        case 2:printf("enter the num of elements\n");
                scanf("%d",&n);
                descending(a);
                printf("the descending elements are\n");
                show(a);
                mergesort(a,n);
                printf("after sorting ele are\n");
                show(a);
                printf("the total num of comparision is %d",comp);
                
                break;
                
        case 3:printf("enter the num of elements\n");
                scanf("%d",&n);
                variable(a);
                printf("\nthe random elements are\n");
                show(a);
                 mergesort(a,n);
                printf("\nafter sorting ele are\n");
                show(a);
                printf("\n the total num of comparision is %d:",comp);
                
                break;
        case 4:exit(0); 
      }
   }
}


void mergesort(int *a, int n)
{
   int b[20],c[20],i=0,j,k;
   if(n>1)
   {
       
       for(i=0;i<(n/2);i++)
       b[i]=a[i];
       
       k=i;
       
       for(j=(n/2),i=0;j<n;j++,i++)
       c[i]=a[j];
       
       mergesort(b,k);
       mergesort(c,i);
       merge(b,c,a,k,i);
   }
}

void merge(int *b,int *c, int *a, int p, int q)
{
    int i,j,k;
    i=j=k=0;
    while(i<p && j<q)
    {
        comp++;
        if(b[i]<c[j])
        {
            a[k]=b[i];
            i=i+1;
        }
        else
        {
            a[k]=c[j];
            j=j+1;
        }
     k=k+1;
    }
    if(i==p)
    {
        while(j<q)
        {
            a[k++]=c[j];
            j++;
        }
    }
    else
    {
        while(i<p)
        {
            a[k++]=b[i];
            i++;
        }
    }
}

