#include<stdio.h>
#define npt 4

void main(){

	int x[npt],y[npt],rxy[2*npt - 1];
	int i,n,k,shift;
	printf("Enter the first %d point sequence:\n",npt);
	for(i=0;i<npt;i++){
		scanf("%d",&x[i]);
	}
	printf("Now Enter the second %d point sequence : \n",npt);
	for(i=0;i<npt;i++){
		scanf("%d",&y[i]);
	}	
	printf("\n");


	for(shift=-npt+1,k=0;shift<npt;shift++,k++){
		rxy[k] = 0;
		for(n=0;n<npt;n++){
			if((n-shift)>=0){
				if((n-shift)<npt){
					rxy[k]+=x[n]*y[n-shift];
				}	
			}
		}printf("%d\t",rxy[k]);
	}printf("\n");

}