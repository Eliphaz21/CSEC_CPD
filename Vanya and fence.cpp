# include<iostream>
using namespace std;
int main(){
    int tc,h,i,fh,sum=0;
    cin>>tc>>h;
    if((tc<1||tc>1000)||(h<1||h>1000)){
        exit(0);
    }
    for(i=0;i<tc;i++){
        cin>>fh;
        if(fh<1||fh>(2*h)){
            exit(0);
        }
        if(fh<=h){
            sum+=1;
        }
        else{
            sum+=2;
        }
    }
    cout<<sum;
return 0;

}
