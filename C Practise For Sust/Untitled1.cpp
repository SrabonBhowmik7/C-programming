
#include<stdio.h>
#include<stdlib.h>

#define P_NORMAL 5
#define P_HIGH 1
#define P_LOW 10

int PID = 1;
int CLOCK=0, TotalWaitingTime=0, TotalProcessExecuted=0;
typedef struct a
{
    int pid, priority;
    int burstTime, arrivalTime, waitingTime, turnArTime;
    struct a *next,*prev;

} PCB;
typedef struct
{
    PCB *head, *tail;

} Queue;

void printQueue (Queue *q)
{
    PCB *pn = q->head;
    printf("\n\nPID\t CPUBurst\t Arrival\t Waiting\t NodeLocation\n");
    while (pn!=0)
    {
        printf ("%3d %8d %15d %15d @%15d \n", pn->pid, pn->burstTime, pn->arrivalTime, pn->waitingTime, pn);
        pn = pn->next;
    }
}
void insertProcess (Queue *q, int burst, int priority)
{
    PCB *newProcess = (PCB *)malloc(sizeof(PCB));//link Reset
    //set value for new process.
    newProcess->pid=PID++;
    newProcess->arrivalTime = CLOCK;
    newProcess->burstTime = burst;
    newProcess->priority = priority;

    newProcess->waitingTime=-1;
    newProcess->turnArTime=-1;

    // Link Setup
    if (q->head==0)
    {
        q->head = q->tail = newProcess;
    }
    else
    {
        q->tail->next = newProcess;
        newProcess->prev= q->tail;
        q->tail = newProcess;

    }

}

PCB deQueue(Queue *list)
{
    PCB t;
    t.pid = 0;
    if (list->head == 0)

    {
        printf("\n Queue is empty! \n");
        return t;
    }
    t = *list->head;
    list->head = list->head->next;
    return t;

}


void executeProcess(Queue *rq)
{
    while(!rq->head == 0)//cpu execution
    {
        PCB r = deQueue(rq);
        printf("\n\nProcess %d is being Processed",r.pid);

        r.waitingTime = CLOCK- r.arrivalTime;
        TotalWaitingTime+=r.waitingTime;
        CLOCK+=r.burstTime;
        printf("\n Waiting Time for process-%d is %d", r.pid, r.waitingTime);
        printf("\nAfter Completion, CLOCK=%d", CLOCK);
        TotalProcessExecuted++;

    }
    printf("\n Average Waiting time = %f",(float)(TotalWaitingTime/TotalProcessExecuted));
}
int main ()
{
    Queue *readyQ = (Queue *) malloc(sizeof(Queue));
    readyQ->head = readyQ->tail = 0;
    insertProcess(readyQ,10, P_NORMAL);
    insertProcess(readyQ,5, P_NORMAL);
    insertProcess(readyQ,20, P_NORMAL);

    printQueue(readyQ);

//  deQueue(readyQ); printQueue(readyQ);
    executeProcess(readyQ);

}
