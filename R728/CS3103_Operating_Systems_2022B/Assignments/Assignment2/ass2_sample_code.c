#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *camera_thread(void *args)
{
    // use camera thread to manage the cache
    ...

    usleep(800000); // sleep 800ms 
    ...
    pthread_exit(NULL);

}

void *quantizer_thread(void *args)
{
    // use quantizer thread to quantize, print, delete the frame 
    ...

    usleep(1000000);//sleep 1000 ms
    ...
    pthread_exit(NULL);


}

int main()
{
    pthread_t thread1,thread2;
    int iret1,iret2;

    iret1=pthread_create(&thread1,NULL,camera_thread,NULL);
    iret2=pthread_create(&thread2,NULL,quantizer_thread,NULL);

    ...

    
}
