#include <iostream>
#include <fstream>
#include "file_io.h"

void read(){
    std::cout << "hard workaaaaaa" << std::endl;
}

ReadResult read_numbers(const char* file_name = "input.txt"){
    std::ifstream fin(file_name);
    ReadResult n;
    fin >> n.number1 >> n.number2;
    return n;
}

void write_result(const char* file_name, int result){
    std::ofstream fout(file_name);
    fout << result;
}