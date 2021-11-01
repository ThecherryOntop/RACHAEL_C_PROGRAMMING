#include <stdio.h>

struct {
    char *engine;
} car1, car2;

int main(void){
    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 Kappa Dual";
    
     printf("%s\n", car1.engine);
     printf("%s\n", car2.engine);
    return 0;
}
