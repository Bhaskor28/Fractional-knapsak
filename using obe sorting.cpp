// Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

struct item{
ll profit,weight;

item(ll profit,ll weight){
this->profit=profit;
this->weight=weight;


}

};



bool cmp(struct item a, item b){

double r1=(double)a.profit/a.weight;
double r2=(double)b.profit/b.weight;

return r1>r2;

}

double knapsak(struct item a[],ll w,ll n){

double fpro=0.0;

sort(a,a+n,cmp);
for(int i=0;i<n;i++){
    cout<<a[i].profit<<" "<<a[i].weight<<endl;
    cout<<" w = "<<w<<endl;
    if(w>a[i].weight){
        w-=a[i].weight;
        fpro+=(double)a[i].profit;
        cout<<" w = "<<w<<endl;
    }
    else if(w<a[i].weight && !w<=0){
        fpro+=(double)(a[i].profit/a[i].weight)*w;
        w-=w;

    }
    cout<<fpro<<endl;

}

return fpro;


}



int main(){

ll n;
ll w=50;
item a[]={{120,30},{100,20},{60,10}};

n=sizeof(a)/sizeof(a[0]);

cout<<knapsak(a,w,n)<<endl;

return 0;
}
