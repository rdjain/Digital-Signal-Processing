#include<stdio.h>

#define npt 6

void main(){

	int x[npt],h[2*npt],y[npt];
	int i,n,shift;
	printf("Enter the first %d point sequence:\n",npt);
	for(i=0;i<npt;i++){
		scanf("%d",&x[i]);
	}
	printf("Now Enter the second %d point sequence : \n",npt);
	for(i=npt-1;i>=0;i--){
		scanf("%d",&h[i]);
		h[npt+i] = h[i];
	}
	printf("\n");
	for(n=0, shift=(npt-1);n<npt, shift>=0;n++, shift--){
		y[n]=0;
		for(i=0;i<npt;i++){
			y[n]+=x[i]*h[shift+i];
		}
	}
	printf("The Convoluted Sequence is :\n\n");
	for(i=0;i<npt;i++){
		printf("%d\t",y[i]);
	}
	printf("\n");
}
