// main.c
#include "rtos.h"

int main(void) {
    rtos_init();  // Initialize RTOS
    //create_task(blinky, NULL, STACK_SIZE);  // Create a task to run the blinky example

    rtos_start();  // Start RTOS scheduler
    return 0;  // We should never reach this point in a correctly functioning RTOS
}
