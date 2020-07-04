#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p1, p2;
    int t;

    cin>>t;
    while(t--)
    {
        cin>>p1>>p2;
        //paper , paper = both win
        if(p1=="papel" && p2=="papel")
        {
            cout<<"Ambos venceram\n";
        }
        //rock, rock = no winner
        else if(p1=="pedra" && p2=="pedra")
        {
            cout<<"Sem ganhador\n";
        }
        //air, air = Mutual Annihilation occurs
        else if(p1=="ataque" && p2=="ataque")
        {
            cout<<"Aniquilacao mutua\n";
        }
        //paper, air = air
        else if(p1=="papel" && p2=="ataque")
        {
            cout<<"Jogador 2 venceu\n";
        }
        //air, paper = air
        else if(p1=="ataque" && p2=="papel")
        {
            cout<<"Jogador 1 venceu\n";
        }
        //air, rock = air
        else if(p1=="ataque" && p2=="pedra")
        {
            cout<<"Jogador 1 venceu\n";
        }
        //rock, air = air
        else if(p1=="pedra" && p2=="ataque")
        {
            cout<<"Jogador 2 venceu\n";
        }
        //rock, paper = rock
        else if(p1=="pedra" && p2=="papel")
        {
            cout<<"Jogador 1 venceu\n";
        }
        //paper, rock = rock
        else if(p1=="papel" && p2=="pedra")
        {
            cout<<"Jogador 2 venceu\n";
        }
    }
    return 0;
}
