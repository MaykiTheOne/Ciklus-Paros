#include <iostream>

using namespace std;

int main()
{
    double OP=0,OPN=0,SP=0,SPN=0;
    int a,n,i=0,b=0,c=0;
    cout <<"n=";
    cin >> n;

    for(i=0 ; i<n ; i++){
        cout << "a=";
        cin >> a;
        if(a%2==0){
        SP=SP+a;
        b=b+1;
        }
        else{
            SPN=SPN+a;
            c=c+1;
        }

        OP=SP/b;
        OPN=SPN/c;
    }
    cout << "Paros Atlag=" << OP <<endl;
    cout << "Paratlan Atlag=" << OPN <<endl;


    return 0;
}
