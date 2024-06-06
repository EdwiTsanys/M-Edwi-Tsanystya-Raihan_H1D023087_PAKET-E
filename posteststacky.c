#include <stdio.h>
#include <stdlib.h>
#define MAXSTACK 7

typedef struct{
    int item[MAXSTACK];
    int count;
} stack;
stack tumpukan;

int isFull(stack *x){
    int hasil=0;
    if((x->count)>=MAXSTACK)
        hasil=1;
    return hasil;
}

int isEmpty(stack *x){
    int hasil=0;
    if((x->count)==0){
        hasil=1;
    }    
    return hasil;
}
void membuatstack(stack *x){
    x->count=0;
    for(int i =0;i<n;i+2){
        cout<<i;
    }
}
void push(int data,stack *x){
    if(isFull(x)==1){
        printf("Stack Penuh\n");
    }else{
        x->item[x->count]=data;
        ++(x->count);
        printf("berhasil memasukkan\n");
    }
}
void pop(stack *x){
    if(x->count==0){
        printf("\nkosong\n");
    }else{
        x->count--;
        printf("Diambil %d\n",x->item[x->count]);
    }
}
void cetak(){
    for(int i=0;i<MAXSTACK;i++){
        printf("isi index %d %d \n",i,tumpukan.item[i]);
    }
}


int main(){
    int n;
    cout<<"Masukkan n: ";
    cin>>n;
    cetak();

}