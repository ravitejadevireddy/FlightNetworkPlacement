# include<stdio.h>
# include<stdlib.h>
int main(){
	int M,N;
	int i;
	int index=0;
	int count=1;
	printf("Enter the value of M");
	scanf("%d",&M);
	printf("Enter the value of N");
	scanf("%d",&N);
	int *A = malloc (sizeof (int) * M);
	for(i=0;i<M;i++){
		A[i]=i+1;
	}
	int j=1;
	while(j<M){
		printf("index%d\n",index);
		printf("count%d\n",count);
		
		if(index!=M){
			if(A[index]==0){
				index++;
			}
			else{
				 if(count==N){
                                        index++;
					A[index]=0;
                                       
                                        count=1;
                                        j++;
					printf("changed index%d\n",index-1);
					
                                }
				else{
					index++;
					count++;
				}
			}
		}
		else{
			index=0;
		}
		
	}
	if(index==N-1)
		printf("1");
	else
	printf("%d",index+1);
}
