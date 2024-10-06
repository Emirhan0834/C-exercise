/*
1. Add a retrieve function to the counting example from Listing 2-6 to
retrieve the current value of counter.
 2. Declare an array of three pointers to functions and invoke the appro
priate function based on an index value passed in as an argument
page 34
*/
#include <stdio.h>
static unsigned int counter = 0;
void set_counter(void) {
    counter++;
}
unsigned get_counter(void) {
    return counter;
}
void fonksiyon1(void) {
    printf("Function 1 called \n current counter value is : %d\n", get_counter());
}
void fonksiyon2(void) {
    printf("Function 2 called \n current counter value is : %d\n", get_counter());
}
void fonksiyon3(void) {
    printf("Function 3 called \n current counter value is : %d\n", get_counter());
}
int main(void) {

    for (int i = 0; i < 5; i++) {
        set_counter();
    }
    void (*fonksiyonlar[3])(void) = {fonksiyon1,fonksiyon2,fonksiyon3};
    int fonks;
    printf("Please select a function 1-2-3\t");
    scanf("%d", &fonks);
    if (fonks ==1 || fonks ==2 || fonks ==3 ) {
        (fonksiyonlar[fonks-1])();
    }
    else {
        printf("you chose a wrong number! ");
    }
    return 0;
}

