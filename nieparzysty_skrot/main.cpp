#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
int nwd(int a, int b)
{
    int dziel=2,wyn=1,mniej;
    if(a==b)
    {
        return a;
    }
    else{
        if(a<b){
            mniej=a;}
        else{
            mniej=b;}
        while(mniej>=dziel)
        {
            if(a%dziel==0&&b%dziel==0)
            {
                wyn=dziel;
            }
            dziel++;
        }
    }
    return wyn;
}
int nps(int m)
{
    string liczba=to_string(m),tym="";
    for(int i=0;i<liczba.size();i++)
    {
        if(liczba[i]%2!=0){
            tym+=liczba[i];}
    }
    int odp=stoi(tym);
    return odp;
}
int main()
{
    fstream wejscie("skrot2.txt");
    int we;
    vector <int> tab;
    for(int i=0;i<200;i++)
    {
        wejscie>>we;
        tab.push_back(we);
    }
    for(int i=0;i<200;i++)
    {
        if(nwd(tab[i],nps(tab[i]))==7){
            cout<<tab[i]<<endl;}
    }

}
