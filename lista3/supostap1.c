#include<stdio.h>
//2 4 1 0 3 vetor
void vetij(int v[],int i){
if (i == 5)
    return;
int j = 0;
j = v[i];
vetij(v,i+1);
v[j] = i;
printf("%d",v[j]);

}


int main(){
int v[5] = {2,4,1,0,3};
vetij(v,0);
}