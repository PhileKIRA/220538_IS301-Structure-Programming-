/******************************************************************************

Name: Philemon KIRA 220538
IS301 Lab3 2026

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "payroll.h"

int main() {
    FILE *inFile, *outFile;

    /* Open employee.txt for reading */
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    /* Open payroll_register.txt for writing */
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    /* Call function to process payroll */
    processPayroll(inFile, outFile);

    /* Close files */
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}



