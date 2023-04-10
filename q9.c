 #include<stdio.h>
struct emp
{
  int id;
  char name[20];
  int age;
  char address[40];
  char dept[20];
  float sal;
};
int main()
{
  int i, n, flag=0;
  struct emp data[10];

  for(i=0; i<10; i++)
  {
  	printf("enter the details of employee no %d\n",i+1);
    printf("enter the id of employee\n");
    scanf("%d", &data[i].id);
    printf("enter the name of employee\n");
    scanf("%s", data[i].name);
    printf("enter the age of employee\n");
    scanf("%d", &data[i].age);
    printf("enter the address of employee\n");
    scanf("%s", data[i].address);
    printf("enter the department of employee\n");
    scanf("%s", data[i].dept);
    printf("enter the salary of employee\n");
    scanf("%f", &data[i].sal);
  }

  printf("enter the employee id you want to search for");
  scanf("%d", &n);


  for(i=0; i<10; i++)
  {
    if(data[i].id==n)
    {
      flag=1;
      printf("employee id--> %d\n", data[i].id);
      printf("employee name--> %s\n", data[i].name);
      printf("employee age--> %d\n", data[i].age);
      printf("employee address--> %s\n", data[i].address);
      printf("employee department--> %s\n", data[i].dept);
      printf("employee salary--> %.2f", data[i].sal);
    }
  }

  if(flag==0)
  printf("employee details not found");
}

