#include <stdio.h>

int main() {
    static constexpr char HELLO3[6] = "Howdy";
    printf(HELLO3);
    return 0;
}