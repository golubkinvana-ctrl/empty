#pragma once

void read();

struct ReadResult {
    int number1;
    int number2;
};

ReadResult read_numbers(const char* file_name);
void write_result(const char* file_name, int result);
