// Taking Input By User
void Input()
{
    int i;
    printf("\n Enter the Total no. of Processes: ");
    scanf("%d",&k); // Taking input no of processes
    for(i=1;i<=k;i++)
    {
        fflush(stdin); // for buffer
        printf("\n\n Enter  Process name: ");
        scanf("%s",&Pname[i]); // Taking input process name
          printf("\n Enter Arrival Time for current  Process %s =  ",Pname[i]);
        scanf("%d",&Arrtime[i]); // Taking input Arrival time
        printf("\n Enter BurstTime for current Process %s = ",Pname[i]);
        scanf("%d",&Bursttime[i]); // Taking input burst time
    }
}
