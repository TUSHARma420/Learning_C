#include<stdio.h>
#include<conio.h>
#include<string.h>
void del();
void modify();
void create(); 
void insert(); 
void display(); 
int cnt=0;
struct student{
    char name[50];
    int prn;
    float per;
};
struct student stu[10];

int main(){
    int ch, num;
    do
    {
        printf("\n MAIN MENU");
        printf("\n 1. CREATE ");
        printf("\n 2. INSERT ");
        printf("\n 3. MODIFY");
        printf("\n 4. DELETE");
        printf("\n 5. DISPLAY");
    printf("\n Enter choice number==>");
    scanf("%d",&num);   

    switch(num){
        case 1:
            create();
            break;
         case 2:
            insert();
            break;
        case 3:
            modify();
            break;
        case 4:
            del();
            break;
        case 5:
            display();
            break;
        default:
            printf("wrong choice");
            }
    printf("\n Do you want to continue(0/1))==>");
    scanf("%d",&ch);
    }while (ch!=0);
getch();
}  

void create()
{
printf("Enter students name: ");
	scanf("\n");
	gets(stu[cnt].name);
	printf("Enter student's PRN : ");
	scanf("%d", &stu[cnt].prn);
	printf("Enter student's percentage : ");
	scanf("%f", &stu[cnt].per);
	cnt++;
}
void insert()
{
int index;
	printf("\nEnter the position: ");
	scanf("%d",&index);
	if(index > cnt)
	{
		printf("There are only %d elements.",cnt);
		return;
	}
	
	index--;
	
	int i;
	for(i = cnt-1; i >= index; i--){
		stu[i+1] = stu[i];
	}
	printf("\nEnter Student's name: ");
	scanf("\n");
	gets(stu[index].name);
	
	printf("Enter student's PRN: ");
	scanf("%d", &stu[index].prn);
	
	printf("Enter student's percentage : ");
	scanf("%f", &stu[index].per);
	
	printf("**Student record created successfully!**");
	cnt++;
}  
void del()
{
    int post;
	printf("\nEnter the position you at which you want to delete ?: ");
	scanf("%d",&post);
	if(post > cnt)
	{
		printf("There are only %d elements.",cnt);
		return;
	}
	post--;
	int i;
	for(i = post; i < cnt; i++)
	{
		stu[i] = stu[i+1];
	}
	cnt--;
	printf("**Element deleted sucessfully !**");

} 
void modify()
{
if(cnt > 0)
	{
		int post = -1, var;
	
		printf("Please enter PRN of the student's whose record you want to modify: ");
		scanf("%d", &var);
	
		int i;
		for(i = 0 ; i < cnt ; i++)
		{
			if(stu[i].prn == var)
			{
				post = i;
				break;
			}
		}
	
		if(post == -1)
		{
			printf("Record is not found !!!");
			return;
		}
	
		printf("\nEnter the new name of student : ");
		scanf("\n");
		gets(stu[post].name);
		
		printf("Enter the new PRN of student : ");
		scanf("%d", &stu[post].prn);
		
		printf("Enter the new percentage of student : ");
		scanf("%d", &stu[post].per);
		
		printf("**Student record has been modified succesfully !**");
	}
	else
	{
		printf("**SORRY!! There are no records in the array !**");		
	}
}
void display()
{
    for(int i=0;i<cnt;i++)
	{
		printf("Student %d details : \n",i+1);
		printf("Name : %d\n", stu[i].name);
		printf("PRN : %d\n", stu[i].prn);
		printf("Percentage : %.2f\n", stu[i].per);	
	}

}
