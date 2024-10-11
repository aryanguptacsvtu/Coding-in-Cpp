#include<iostream>
using namespace std;
int main()
{
    int marks[]={23,54,32,34};
    marks[4]=90;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[2]<<endl;
    marks[2]=88;           // Changing value at marks[2]. 

    cout<<marks[2]<<endl;
    cout<<"\n";


    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is:"<<marks[i]<<endl;
    }

    return 0;
}