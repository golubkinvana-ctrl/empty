#include <iostream>
#include "file_io.h"

int sum(int a, int b){
    return a+b;
}

int main() {
    ReadResult n = read_numbers("input.txt");
    write_result("output.txt", sum(n.number1, n.number2));
    return 0;
}