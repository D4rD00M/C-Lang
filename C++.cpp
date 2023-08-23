#include <iostream>
using namespace std;
class dininghall
{
    int seatno;
    string name;
    static int totalseat;

public:
void get(string m)
{
    name>m;
    seatno:Assignseat();
}
int Assignseat()
{
    if(totalseat>0)
    {
        return totalseat--;
    }
    else
    {
        return -1;
    }
    void show()
    {
        cout<<"name is"<<name;
        cout<<"seatno";
        if (totalseat>0)
        {
            cout<<"allocated seat"<<seatno;
        }
        else{
            cout<<"invalid seat no";
        }
    }};
    int dininghall::totalseat:50;
    int main()
    {
        dininghall d1
        d1.get("John");
        d1.show();
    }
    }