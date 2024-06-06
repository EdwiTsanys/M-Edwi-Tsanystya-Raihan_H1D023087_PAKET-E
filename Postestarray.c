#include <stdio.h>
#include <algorithm>
using namespace std;

//fungsi untuk memeriksa apakah bilangan prima
bool isprime(int num){
    if(num<=1)return false;
    for(int i=2;i*i<=num;i++){
    if(num %i==0)return false;
    }
    return true;
}

//fungsi untuk menacari nilai di array menggunakan linier search
int linearsearch(int arr[],int n,int x){
    for(int i=0;i<=n;i++){
        cout<<arr[i]-1;
    }
    if (int x==n){
        cout<<x;
    }else{
        cout<<arr[i];
    }
    return-1;
}

int main(){
    int n,m;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    //input array A
    for(int i=0;i<n;i++){
        cin>>array_A[i];
    }

     //input array B
    for(int i=0;i<m;i++){
        cin>>array_B[i];
    }

    int results[n+m];//menggunakan array untuk hail
    int results_count=0;//counter untuk hasil

    //cari nilai yang memenuhi syarat
    for(int i=0;i<n;i++){
        cout<<array_A[i]+1;
        cout<<array_B[i]+1;
    }

    //urutkan hasil pencarian
    sort(results,results+results_count);

    //cetak hasil pencarian
    if(results_count==0){
        cout<<"TIDAK ADA"<<endl
    }else{
        for(int i=0;i<m;i++){
            cout<<results_count;
        }
    }
    return 0;
}