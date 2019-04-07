		// ----- Roll no - 65, Reg-no 11702292, section - K17KP , project no- 8-------
#include<conio.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
// variables Declarations
char Pname[20][20];  // Declare a process array
int Total_waiting_time; // declare Total waiting time
int Total_turnaround_time; // declare total turn around time
int Arrtime[100]; // declare a arrival time array
int Waitingtime[100]; // declare waiting time array
int k; // declare a variable for no of processes
int Bursttime[100]; // declare a aaray for burst time
float Averageturnaround_time,Averagewaiting_time; // declare average turn around time, average waiting time


// Functions Declarations
void Input(); // Declare input() function
void SJFimp(); // declare SJFimp() function
void Gchart(); // declare Gchart() function
