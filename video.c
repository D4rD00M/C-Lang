#include<stdio.h>
struct video
{
    char title[20],lang[20];
    int prod,y;
};
typedef struct video vid;
int main()
{
    vid v[10];
    int i,n;
    printf("how many record\n");
    scanf("%d",&n);
    printf("futer video records\n");
    for(i=0;i<n;i++)
    scanf("%s%s%d%d",&v[i].title,&v[i].lang,&v[i].prod,&v[i].y);
    printf("video records are\n");
    for (i=0;i<n;i++)
    {
    printf("%s%s%d%d",v[i].title,v[i].lang,v[i].prod,v[i].y);
    }
    return 0;
}