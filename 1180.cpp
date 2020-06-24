#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, index;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    index = min_element(arr, arr+n)-arr;
    cout<<"Menor valor: "<<arr[index]<<"\n";
    cout<<"Posicao: "<<index<<"\n";

    return 0;
}

