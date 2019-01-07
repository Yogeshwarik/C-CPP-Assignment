#include<stdio.h>
int swp=0,comp=0,n;
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
   printf("%d\n",a[i]);
}

int partition(int a[],int l,int r)
{
   int p,temp,i,j;
   p=a[l];
  i=l+1;
    j=r;
   while(i<=j)
   {
      while(a[i]<p)
      {
        
        i++;
        comp++;
      }
      while(a[j]>p)
      {
         
         j--;
         comp++;
       }
       if(i<j)
       {
          swp++;
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
       }
       else
       {
          swp++;
          temp=a[l];
          a[l]=a[j];
          a[j]=temp;
       }
     }
     return j;
 }
  void quicksort(int a[],int l,int r)
  {
    int s;
    if(l<r)
    {
       s=partition (a,l,r);
       quicksort(a,l,s-1);
       quicksort(a,s+1,r); 
   }
 }
 
 
 
 
 int main()
{
   int ch, a[10];
   while(1)
   {
     comp=0;
     swp=0;
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
                quicksort(a,0,n-1);
                printf("\nafter the sorting ele are\n");
                show(a);
                printf("\nthe total num of comparision is:",comp);
                printf("\n the num of swaps are:%d\n",swp);
                break;
                
                
        case 2:printf("enter the num of elements \n");
                scanf("%d",&n);
                descending(a);
                printf("\nthe descending elements are\n");
                show(a);
                quicksort(a,0,n-1);
                printf("\nafter sorting ele are\n");
                show(a);
                printf("\nthe total num of comparision is:",comp);
                printf("\n the num of swaps are:%d\n",swp);
                break;
                
        case 3:printf("enter the num of elements\n");
                scanf("%d",&n);
                variable(a);
                printf("the random elements are\n");
                show(a);
                quicksort(a,0,n-1);
                printf("after sorting ele are\n");
                show(a);
                printf("\n the total num of comparision is %d",comp);
                printf("\n the num of swaps are %d",swp);
                break;
                default:printf("invalid input\n");
      }
   }
} 

