#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int n,x=0,y=0,z=1;
   
    cout<<"digite el numero de elementos: "; cin>>n;

    cout<<"1 ";
    for(int i=1;i<n;i++){
        z = x + y;//1 2 3 5
        cout<<z<<" ";//1 2 3 5
        x = y;//1 1 2
        y = z;//1 2 3
    
}
    
    cout<<"\n";
    system("pause");
    return 0;
    
}
