// Gannt Chart
void Gchart()
{
    int d,sum;
    printf("\n\nGANTT CHART is");
    printf("\n================================================================\n");
    for(d=1;d<=k;d++)
        printf("|\t%s\t",Pname[d]); // print process name for each process
    printf("|\t\n");
    printf("\n================================================================\n");
    printf("\n");
    for(d=1;d<=k;d++)
        printf("%d\t\t",Waitingtime[d]); // print waiting time for each process
        sum=Waitingtime[k]+Bursttime[k]; // sum is Turn around time
    printf("%d",sum); // print Turn around time
    printf("\n================================================================\n");
    printf("\n");
 }
