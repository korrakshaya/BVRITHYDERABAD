#include<stdio.h>
int main(){
	int i,j,n,at[30],bt[30],wt[30],tat[30],temp[30];
	float awt = 0,atat=0;
	printf("enter number of processors:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the arrival time and burst time P%d:",i+1);
		scanf("%d %d",&at[i],&bt[i]);
	}
        
	temp[0]=0;
	printf("process\t burst time\t Arrival time\t waiting time\t turnaround time\n");
	for(i=0;i<n;i++){
		wt[i]=0;
		tat[i]=0;
		temp[i+1]=temp[i]+bt[i];
		wt[i]=temp[i]-at[i];
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat = atat+tat[i];
		printf("%d\t %d\t\t %d\t\t %d\t\t %d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	}
	awt = awt/n;
	atat = atat/n;
	printf("Average Waiting time:%.2f\n",awt);
	printf("Avarage Turnaround time:%.2f",atat);
}

