#include <stdio.h>
struct student
{
    int roll_no;
    char name[30];
    int age;
};
int main()
{
  int i;
  struct student st[5];

  for(i=0; i<=4; i++)
  {
    printf("Student %d\n",i+1);
    st[i].roll_no = i+1;
    printf("Enter name :\n");
    scanf("%s",st[i].name);
    printf("Enter age :\n");
    scanf("%d", &st[i].age);
  }
  for(i=0; i<=4; i++)
  {
    if(st[i].roll_no == 2)
    {
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", st[i].roll_no);
      printf("Name : %s\n", st[i].name);
      printf("Age. : %d\n", st[i].age);
    }
  }
  return 0;
}
