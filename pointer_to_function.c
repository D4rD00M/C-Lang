#include<stdio.h>
void show (int a)
{
    printf("%d",a);

}
int main()
{
    void(*p) (int)=&show;
    (*p)(10);
    return 0;


}