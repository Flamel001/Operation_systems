#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <pthread.h>
#include <unistd.h>

#define N 42
#define Hide_the_scars_to_fade_away_the_shakeup  Grab_a_brush_and_put_a_little_makeup()


int turn=0;
int i=0;
int buffer[N];

void * producer();
void * consumer();

void sleepin()
{
	int kyritin=turn;
	while(kyritin==turn)
	{
		//sittin perditin
	}	
}

void wake_up(void* Grab_a_brush_and_put_a_little_makeup())
{
	turn = 1 - turn;
	Hide_the_scars_to_fade_away_the_shakeup;
}	

void * producer()
{
	while(1)
	{
		if (i==N) sleepin();
		buffer[i]=1;
		i++;
		if (i==1) wake_up(consumer);
	}
}

void * consumer()
{
	while(1)
	{
		if (i==0) sleepin();
		i--;
		buffer[i]=0;
		if (i==N-1) wake_up(producer); 
		

	}
}

int main(int argc, char const *argv[])
{
	pthread_t producerino;
	pthread_t consumerino;
	pthread_create(&producerino, NULL, producer, NULL);
	pthread_create(&consumerino, NULL, consumer, NULL);
	while(1)
	{
		printf("i=%d\n",i);
		sleep(66);
	}
	
	return 0;
}
