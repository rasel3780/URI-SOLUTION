#include <iostream>

using namespace std;

int main()
{
    int positive = 0;
    double num;
    for(int i = 0; i < 6; i ++)
    {
        cin>>num;
        if(num > 0)
        {
            positive ++;
        }
    }
    cout<<positive<<" valores positivos\n";


    return 0;
}
