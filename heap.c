#include<stdio.h>
int comp=0;
void heap(int *a,int i, int n)
{
    int j,temp;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if(j<n && a[j+1]>a[j])
        j=j+1;
        comp++;
        if(temp>a[j])
        break;
        else if(temp<=a[j])
        {
            a[j/2]=a[j];
            j=j*2;
        }
    }
    a[j/2]=temp;
    return;
}

void build_maxheap(int *a,int n)
{
    int i;
    for(i=(n/2);i>=1;i--)
    heap(a,i,n);
}

void heapsort(int *a,int n)
{
    int i, temp;
    for(i=n;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        heap(a,1,i-1);
    }
}

void main()
{
    int a[50],n,i;
    printf("Enter no. of elements to be stored in array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    build_maxheap(a,n);
    heapsort(a,n);
    
    printf("Array elements in sorted order are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("number of the comparisions %d",comp);
}

