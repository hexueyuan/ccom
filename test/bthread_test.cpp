#include <iostream>

#include "bthread/bthread.h"

void* work_main(void*) {
    std::cout << "do" << std::endl;
    return nullptr;
}

int main(int argc, char** argv) {
    bthread_t th;
    bthread_start_background(&th, NULL, work_main, NULL);

    bthread_join(th, NULL);
    return 0;
}
