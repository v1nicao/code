#include<stdio.h>

int main(){
	
    float nump=0, numi=0, mp, mi, conti=0, contp=0;
	int num;
	
	while(1){
	
    	scanf("%d", &num);
		if(num==0){
			break;
		}
	
		if (num%2==0) {
			contp++;
			nump+=num;
			mp=nump/contp;
	
   	  		} 
   	  		
		   else {
   			conti++;
   			numi+=num;
   			mi=numi/conti;
   			
		}
 	
}
	printf("MEDIA PAR: %f\n", mp);
	printf("MEDIA IMPAR: %f\n", mi);

return 0;
}