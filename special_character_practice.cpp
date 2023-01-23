//CreateSeed
//RandomlyShuffle


//srand(time(0));
//random_shuffle(s.begin(), s.end());

#define fre(x) freopen(#x,"r",stdin);
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
char ans;
int cnt;
string s;


int main(){
    ifstream infile;
    infile.open("raw.txt");
    getline(infile,s);
    srand(time(0));
    random_shuffle(s.begin(), s.end());
    for(int i=0;i<s.size();i++){
        cout<<"Required input:"<<'\n';
        cout<<s[i]<<'\n';
        cout<<"Your input:"<<'\n';
        std::cin>>ans;
        if(s[i]==ans){
            cnt++;
        }
    }
    cout<<"\nAccuracy: "<<cnt<<'/'<<s.size()
        <<" ("
        <<setprecision(2)<<(float)cnt/s.size()
        <<")\n";

    cout<<"END of execution.\nWritten By 5E07 (GH), retart (CF).\nAs Of 2023.01.23.";
    std::cin>>ans;
    return 0;
}
