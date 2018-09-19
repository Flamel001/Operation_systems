#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define NUM_THREADS 42
int thread_id [NUM_THREADS];
void * PrintHello(int i) {
printf("Hello from thread %d -I was created in iteration %d !\n",
	pthread_self(),i);
	sleep(1);
}

int main(int argc, char* argv[]) {

for(int i= 0; i< NUM_THREADS; i++){
	pthread_t thread_not_to_dump_fkn_core;
	pthread_create(&thread_not_to_dump_fkn_core, NULL,PrintHello,i);
	//with this one it'll go in sequentional('ll wait untill thread finishes)
	//pthread_join(thread_not_to_dump_fkn_core, NULL);
	
printf("\n I am thread %d. Created new thread (%d) in iteration %d ...\n",
 pthread_self(), thread_not_to_dump_fkn_core,i);
}
return 0;
}
