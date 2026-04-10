/******************************************************************************

Name: Philemon KIRA 220538
IS301 Lab3 2026

*******************************************************************************/
#include <stdio.h>
#include "payroll.h"

void processPayroll(FILE *inFile, FILE *outFile) {
    char empNo[10], exempt;
    int dept, hoursWorked;
    float payRate, basePay;
    char header[100];

    /* Read and discard input file header */
    fgets(header, sizeof(header), inFile);

    /* Write output file header */
    fprintf(outFile, "%-12s %-11s %-9s %-6s %-13s %s\n",
            "Employee No.", "Department", "Pay Rate",
            "Exempt", "Hours Worked", "Base Pay");

    /* Read records, calculate base pay, and write output */
    while (fscanf(inFile, "%s %d %f %c %d",
                  empNo, &dept, &payRate, &exempt, &hoursWorked) == 5) {
        basePay = payRate * hoursWorked;

        fprintf(outFile, "%-12s %-11d %-9.2f %-6c %-13d %.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }
}
