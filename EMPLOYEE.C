struct employee
{
	 int empId;
 	char empName[20];
 	int empSalary;
 	char empDept[5];
 	int isDelete;
}dollop[100];
int index=-1;


int addEmployee(struct employee e1)
{
  int flag = 0;
/*  int i;
  for(i=0;i<=index;i++)
  {
   if(dollop[i].isDelete==1)
   {
     dollop[i] = e1;
     flag = 1;
     return flag;
   }

  }*/
  dollop[++index] = e1;
  flag=1;
  return flag;
}

/*
struct employee viewEmpolyee(int i)
{
struct employee e1;
e1=dollop[i];
return e1;
} */
void delByEmployeeId(int i)
{
   dollop[i].isDelete = 1;
}

struct employee search(int i)
{
 	struct employee e1;
 	e1 = dollop[i];
 	return e1;
}



int gettingIndex(int empId)
{
	int i;
	for(i=0;i<=index;i++)
	{
		if(dollop[i].isDelete==0)
		{
		  if(dollop[i].empId==empId)
 		  return i;
 		}
	}
	return -1;
}



void edit(int i)
{
 	int choice;
 	while(1)
 {
 	 int flag = 0;
 		clrscr();
 		printf("\n %d %s %d %s\n",dollop[i].empId,dollop[i].empName,dollop[i].empSalary,dollop[i].empDept);
 		printf("1 : For edit name\n");
 		printf("2 : For edit salary\n");
 		printf("3 : For edit dept\n");
 		printf("4 : Press any key if editing is done \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 			{
 				printf("\nEnter new name : ");
 				scanf("%s",&dollop[i].empName);
 				break;
 			}
 			case 2:
 			{
 				printf("\nEnter new salary : ");
 				scanf("%d",&dollop[i].empSalary);
 				break;
 			}
 			case 3:
 			{
 			printf("\nEnter new Dep : ");
 			scanf("%s",&dollop[i].empDept);
 			break;
			}
 			default:
 			{
 			flag = 1;
 			break;
	 		}
		}
		if(flag==1)
		{
 		break;
		}
	}
}
void main()
{       struct employee e1;
	int choice;
	while(1)
	{
	  clrscr();
		printf("\n1 . Add employee\n");
		printf("\n2 . Veiw employee\n");
		printf("\n3 . Search employee\n");
		printf("\n4 . Edit employee\n");
		printf("\n5 . Delete employee data\n");
		printf("\n6 . Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				       // struct employee e1;
					printf("\nEnter employee Id : ");
					scanf("%d",&e1.empId);
					printf("\nEnter employee name : ");
					scanf("%s",&e1.empName);
					printf("\nEnter employee salary : ");
					scanf("%d",&e1.empSalary);
					printf("\nEnter employee Dept : ");
					scanf("%s",&e1.empDept);
					e1.isDelete=0;
					if(addEmployee(e1))
					{
					printf(" 1 Employee insert  Press an any to proceed\n");
                                        getch();
					break;
					}
				}
      case 2:
         {
           // struct employee e1;
            int i;
            if(index<0)
            {
              printf("\nNULL\n Press any key to procced");
              break;
            }
            for(i=0;i<=index;i++)
            {
            	if(dollop[i].isDelete==0)
            	{
                e1=search(i);
                printf("\n%d %s %d %s \n",e1.empId,e1.empName,e1.empSalary,e1.empDept);
              }
            }
            printf("Press any key to procced");
            getch();
            break;
          }
      case 3:
          {
            int empId,check;
           // struct employee e1;
            printf("\nEnter the Id\n");
            scanf("%d",&empId);
            check = gettingIndex(empId);
            if(check!=-1)
              {
                e1 = search(check);
                printf("\n%d %s %d %s \n Press any key to procced",e1.empId,e1.empName,e1.empSalary,e1.empDept);
                getch();
              }
              else
              {
                printf("\nNULL\n Press any key to procced");
                getch();
              }
              break;
            }
      case 4:
            {
              int empId,i;
              printf("\nEnter employee Id : ");
              scanf("%d",&empId);
              i = gettingIndex(empId);
              if(i==-1)
              {
               	printf("\nNULL\n Press any key to procced");
               	getch();
                break;
              }
              edit(i);
              printf("\n Press any key to procced");
              getch();
              break;
            }
      case 5:
      	{
      		int empId,i;
      		printf("\nEnter employee id : ");
      		scanf("%d",&empId);
          i = gettingIndex(empId);
          if(i==-1)
          {
          	printf("\nNULL\n Press any key to procced");
            getch();
            break;
          }
          delByEmployeeId(i);
          printf("\nData is deleted \n Press any key to procced ");
          getch();
          break;
      	}
	    default:
	         	{
	         		 exit(0);
	         	}
		}
	}

}