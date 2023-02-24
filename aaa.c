void del();
void modify();
void create();
void insert();
void display();

int cnt=0;

struct student
{
char name[50];
int prn;
float per;
};

struct student stu[10];

int main()
{
int ch, num;
do
{
printf(" \n MAIN MENU");
printf("\n 1. CREATE");
printf("\n 2. INSERT");
printf("\n 3. MODIFY");
printf("\n 4. DELETE");
printf("\n 5. DISPLAY");
printf("\nEnter choice number==>");
scanf("%d", &num);
switch(num)
{
case 1://create a new database
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
printf("\n Do you want to continue(0/1)==>");
scanf("%d", &ch);
}while(ch!=0);
getch();
}

void create()
{
printf("Enter name: ");
scanf("\n");
gets(stu[cnt].name);
printf("Enter PRN: ");
scanf("%d", &stu[cnt].prn);
printf("Enter percentage: ");
scanf("%f", &stu[cnt].per);
cnt++;
}

void insert()
{
int index;
printf("\nEnter at which position?: ");
scanf("%d",&index);
if(index > cnt){
printf("There are only %d elements.",cnt);
return;
}
index--;
int i;
for(i = cnt-1; i >= index; i--){
stu[i+1] = stu[i];
}
printf("\nEnter name of Student: ");
scanf("\n");
gets(stu[index].name);
printf("Enter prn of student: ");
scanf("%d", &stu[index].prn);
printf("Enter percentage of student: ");
scanf("%f", &stu[index].per);
printf("Student record created!");
cnt++;
}

void del()
{
int index;
printf("\nEnter at which position?: ");
scanf("%d",&index);
if(index > cnt){
printf("There are only %d elements.",cnt);
return;
}
index--;
int i;
for(i = index; i < cnt; i++){
stu[i] = stu[i+1];
}
cnt--;
printf("Element has been deleted.");
}

void modify()
{
if(cnt > 0)
{
int index = -1, tmp;
printf("Enter PRN of the record you want to modify: ");
scanf("%d", &tmp);
int i;
for(i = 0 ; i < cnt ; i++)
{
if(stu[i].prn == tmp)
{
index = i;
break;
}
}
if(index == -1)
{
printf("Record not found!");
return;
}
printf("\nEnter new name of Student: ");
scanf("\n");
gets(stu[index].name);
printf("Enter new prn of student: ");
scanf("%d", &stu[index].prn);
printf("Enter new percentage of student: ");
scanf("%f", &stu[index].per);
printf("Student record modified!");
}
else
{
printf("There are no records in the array!");
}
}

void display()
{
for(int i=0;i<cnt;i++)
{
printf("Student %d details: \n",i+1);
printf("Name: %s\n", stu[i].name);
printf("PRN: %d\n", stu[i].prn);
printf("Percentage: %.2f\n", stu[i].per);
}
void del();
void modify();
void create();
void insert();
void display();

int cnt=0;

struct student
{
char name[50];
int prn;
float per;
};

struct student stu[10];

int main()
{
int ch, num;
do
{
printf(" \n MAIN MENU");
printf("\n 1. CREATE");
printf("\n 2. INSERT");
printf("\n 3. MODIFY");
printf("\n 4. DELETE");
printf("\n 5. DISPLAY");
printf("\nEnter choice number==>");
scanf("%d", &num);
switch(num)
{
case 1://create a new database
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
printf("\n Do you want to continue(0/1)==>");
scanf("%d", &ch);
}while(ch!=0);
getch();
}

void create()
{
printf("Enter name: ");
scanf("\n");
gets(stu[cnt].name);
printf("Enter PRN: ");
scanf("%d", &stu[cnt].prn);
printf("Enter percentage: ");
scanf("%f", &stu[cnt].per);
cnt++;
}

void insert()
{
int index;
printf("\nEnter at which position?: ");
scanf("%d",&index);
if(index > cnt){
printf("There are only %d elements.",cnt);
return;
}
index--;
int i;
for(i = cnt-1; i >= index; i--){
stu[i+1] = stu[i];
}
printf("\nEnter name of Student: ");
scanf("\n");
gets(stu[index].name);
printf("Enter prn of student: ");
scanf("%d", &stu[index].prn);
printf("Enter percentage of student: ");
scanf("%f", &stu[index].per);
printf("Student record created!");
cnt++;
}

void del()
{
int index;
printf("\nEnter at which position?: ");
scanf("%d",&index);
if(index > cnt){
printf("There are only %d elements.",cnt);
return;
}
index--;
int i;
for(i = index; i < cnt; i++){
stu[i] = stu[i+1];
}
cnt--;
printf("Element has been deleted.");
}

void modify()
{
if(cnt > 0)
{
int index = -1, tmp;
printf("Enter PRN of the record you want to modify: ");
scanf("%d", &tmp);
int i;
for(i = 0 ; i < cnt ; i++)
{
if(stu[i].prn == tmp)
{
index = i;
break;
}
}
if(index == -1)
{
printf("Record not found!");
return;
}
printf("\nEnter new name of Student: ");
scanf("\n");
gets(stu[index].name);
printf("Enter new prn of student: ");
scanf("%d", &stu[index].prn);
printf("Enter new percentage of student: ");
scanf("%f", &stu[index].per);
printf("Student record modified!");
}
else
{
printf("There are no records in the array!");
}
}

void display()
{
for(int i=0;i<cnt;i++)
{
printf("Student %d details: \n",i+1);
printf("Name: %s\n", stu[i].name);
printf("PRN: %d\n", stu[i].prn);
printf("Percentage: %.2f\n", stu[i].per);
}
}