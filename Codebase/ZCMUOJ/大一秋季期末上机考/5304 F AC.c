#include<stdio.h>
int main(){
	long int n,i;
	while(scanf("%ld",&n)!=EOF){
		if(n==0){
			break;
		}
		long int sum=0;
		if(n<=3&&n>0){
			printf("%ld\n",8);
		}
		else if(n>3&&n<=6){
			sum=8+(n-3)*2;
			printf("%ld\n",sum);
		}/*
		else if(n>6&&n<=12){
			sum=8+6+(n-6)*3;
			printf("%ld",sum);
		}*/
		else if(n>6){
			int b=n%6,a=(n-b)/6;//12
			long int min=99999999999;
			for(i=a;i>=0;i--){
				if(n-6*i<=3&&n-6*i>0)sum+=i*14+8;
				else if(n-6*i>3&&n-6*i<=6)sum+=i*14+8+(n-6*i-3)*2;
				else if(n-6*i>6)sum+=i*14+8+3*2+(n-6*i-6)*3;
				else if(n-6*i==0)sum=i*14;
				if(sum<min)min=sum;
			}
			/*
			if(b<=3){
				sum+=8;
			}
			else if(b>3&&b<6){
				sum+=8+(b-3)*2;
			}
			sum+=a*14;*/
			//if(min>8+6+(n-6)*3)min=8+6+(n-6)*3;
			printf("%ld\n",min);
		}
	}
	return 0;
}

