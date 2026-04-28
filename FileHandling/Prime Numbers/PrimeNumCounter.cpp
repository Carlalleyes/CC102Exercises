#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool Isprime(int n){
    if(n<=1) return false;
        for(int i =2; i*i <= n;i++){
            if(n%i==0) return false;
        }
    return true;

}

int main(){
    int PrimeCount=0;

    fstream NumFile;
    NumFile.open("NUMS.txt", ios::out);
    if(NumFile.is_open())
    {
        for(int i=0;i<=20;i++){
            NumFile<<i<<endl;
        }
    }
    else{
        cout<<"Failed To Open File"<<endl;
    }
    NumFile.close();

    NumFile.open("NUMS.txt",ios::in);
    if(NumFile.is_open()){
        int Nums;
        while(NumFile>>Nums){
            if(Isprime(Nums)==true){
                PrimeCount++;
            }
        }
    }
    else{
        cout<<"Couldn't Open The File"<<endl;
    }

    NumFile.close();

    cout<<"The Number Of Prime Numbers is: "<<PrimeCount<<endl;
return 0;
};