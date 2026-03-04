#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <file1> <file2> <output>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");
    FILE *output = fopen(argv[3], "w");

    if (!file1 || !file2 || !output) {
        fprintf(stderr, "Error opening files\n");
        return 1;
    }

    int num1, num2;
    int read1 = fscanf(file1, "%d", &num1);
    int read2 = fscanf(file2, "%d", &num2);

    while (read1 == 1 && read2 == 1) {
        if (num1 <= num2) {
            fprintf(output, "%d\n", num1);
            read1 = fscanf(file1, "%d", &num1);
        } else {
            fprintf(output, "%d\n", num2);
            read2 = fscanf(file2, "%d", &num2);
        }
    }

    while (read1 == 1) {
        fprintf(output, "%d\n", num1);
        read1 = fscanf(file1, "%d", &num1);
    }

    while (read2 == 1) {
        fprintf(output, "%d\n", num2);
        read2 = fscanf(file2, "%d", &num2);
    }

    fclose(file1);
    fclose(file2);
    fclose(output);

    return 0;
}