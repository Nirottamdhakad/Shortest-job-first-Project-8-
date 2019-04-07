void SJFimp()
{
	 Total_waiting_time=0; // intilize by Zero
	 Total_turnaround_time=0; // intilize by Zero
    int z=0,t,i,P[10],Tt=0;
    int flag1,flag2,j; // two temparory variable for swapping
    char SH[10],cH[20][20];  // declare two two-D array
    printf("\n\n S-J-F Algorithm \n\n ");

	  i=1;
	while(i<=k)
    {
        P[i]=Bursttime[i];
        SH[i]='T';
        Tt=Tt+P[i];
        i++;
    }
    for(i=1;i<=k;i++)
    {
        for(j=3;j<=k;j++)
        {
            if(P[j-1]>P[j])
            {
            	//swapping
                flag1=P[j-1];
                flag2=Arrtime[j-1];
                Arrtime[j-1]=Arrtime[j];
                P[j-1]=P[j];
                P[j]=flag1;
                Arrtime[j]=flag2;
                //copying
                strcpy(cH[j-1],Pname[j-1]); // copy Pname to cH
                strcpy(Pname[j-1],Pname[j]); // copy pname to pname
                strcpy(Pname[j],cH[j-1]); // copy cH to Pname
            }
        }
    }
    //For the 1st process
    Waitingtime[1]=0;
    z=z+P[1];
    t=z;
    SH[1]='F';
    while(z<Tt)
    {
        i=2;
        while(i<=k)
        {
            if(SH[i]=='T'&&Arrtime[i]<=t)
            {
                Waitingtime[i]=z;
                SH[i]='F';
                z=z+P[i];
                t=z;
                i=2;
            }
            else
                i++;
        }
    }

	i=1;
	while(i<=k)
    {
        Total_waiting_time=Total_waiting_time+(Waitingtime[i]-Arrtime[i]); // To compute Total waiting time
        Total_turnaround_time=Total_turnaround_time+((Waitingtime[i]+Bursttime[i])-Arrtime[i]); // To count total turn around time
        i++;
    }
    printf("\n\n\tProcess\tAT\tBT\tTAT\tWT\n\n");
    printf("\n-------------------------------------------------\n");
    i=0;
	while(i<=k)
    {
     printf("\tP%s\t%d\t%d\t%d\t%d\n",Pname[i],Arrtime[i],Bursttime[i],(Waitingtime[i]+Bursttime[i])-Arrtime[i],Waitingtime[i]-Arrtime[i]);
     printf("\n");
     i++;
     }
    Averageturnaround_time=(float)Total_turnaround_time/k; // To count Average turn around time
    Averagewaiting_time=(float)Total_waiting_time/k; // To count Average waiting time
    printf("\n\n Average Turn around time=%3.2f ms ",Averageturnaround_time);
    printf("\n\n AverageWaiting Time=%3.2f ms",Averagewaiting_time);
    Gchart();
}
