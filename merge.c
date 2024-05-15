#include <stdio.h>
#include <stdlib.h>

void merge(int *v,int l,int meio,int r){
	int *v2 = malloc(sizeof(int)*(r-l+1));
	int k = 0,i = l,j=meio+1;
	while(i<=meio&&j<=r){
		if(v[i]<v[j]){
			v2[k++] = v[i++];
		}else{
			v2[k++]=v[j++];
		}
	}
	while(i<=meio)v2[k++]=v[i++];
	while(j<=r)v2[k++]=v[j++];
	k=0;
	for(i=l;i<r;i++){
		v[i]=v2[k++];
	}
	free(v2);
}

void mergesort(int *v,int l,int r){
	if(l>=r)return;
	int meio = (l+r)/2;
	mergesort(v,l,meio);
	mergesort(v,meio+1,r);
	merge(v,l,meio,r);
}

int main(){
	int v[6];
	for(int i=0;i<6;i++){
		scanf("%d",&v[i]);
	}
	mergesort(v,0,6);
	for(int i=0;i<6;i++){
		printf("%d",v[i]);
	}
	return 0;
}
