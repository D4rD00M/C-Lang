#include<stdio.h>
struct student
{
    char name[20];
    int r,m;
    struct dob
    {
        int d,m,y;
    }db;
};
int main()
{
    struct student s;
    printf("enter name,roll & marks\n");
    scanf("%s%d%d",&s.name,&s.r,&s.m);
    printf("enter dob");
    scanf("%d%d%d",&s.db.d,&s.db.m,&s.db.y);
    printf("name%s\nRoll no.%d\n marks%d\n",s.name,s.r,s.m);
    scanf("%d-%d-%d",&s.db.d,&s.db.m,&s.db.y);
    return 0;
}
