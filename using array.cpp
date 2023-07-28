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

int wi;
int pro;




};


bool cmp(struct item b1,item b2){

double r1=(double)b1.pro/b1.wi;
double r2=(double)b2.pro/b2.wi;
return r1>r2;
}


double knapsak(struct item a[],ll n,ll w){

sort(a,a+n,cmp);
double fpro=0.0;
for(int i=0;i<n;i++){
    if(w>=a[i].wi){
        fpro+=a[i].pro;
        w-=a[i].wi;

    }
    else if(w<a[i].wi && !w<=0){
            double per=(double)(a[i].pro/a[i].wi);
        fpro+=per*w;
    w-=w;

    }
}

return fpro;

}



int main(){


int pro[] = {120, 100, 60};
int wei[] = {30, 20, 10};
int w=50;
int n=sizeof(pro)/sizeof(pro[0]);

cout<<n<<endl;

item a[n];
for(int i=0;i<n;i++){
    a[i].pro=pro[i];
    a[i].wi=wei[i];
}

for(int i=0;i<n;i++){
    cout<<a[i].pro<<" "<<a[i].wi<<endl;
}

cout<<knapsak(a,n,w)<<endl;
for(int i=0;i<n;i++){
    cout<<a[i].pro<<" "<<a[i].wi<<endl;
}


return 0;
}



