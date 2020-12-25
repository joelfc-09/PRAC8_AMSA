#include <stdio.h>
#include <stdlib.h>
#include <sched.h>

int main(int argc, char *argv[]) {
	int idPid = atoi(argv[1]);
	struct sched_param params;
	printf("Assignem la prioritat 20 i la política de SCHED_RR al pid: %i.\n", getpid());
	params.sched_priority = 20;
	sched_setscheduler(getpid(), SCHED_RR, &params);
	
	printf("Assignem la prioritat 30 i la política de SCHED_RR al pid: %i.\n", getppid());
	params.sched_priority = 30;
	sched_setscheduler(getppid(), SCHED_RR, &params);
	
	printf("Assignem la prioritat 10 i la política de SCHED_RR al pid: %i.\n", idPid);
	params.sched_priority = 10;
	sched_setscheduler(idPid, SCHED_RR, &params);
	
	exit (0);
}
