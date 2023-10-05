#include <iostream>
#include <stdio.h>
#include<string.h>

int main(void) {

    int i, j;
    double score, fl_grade, tot1, tot2;
    char name[50], grade[3];

    for (i = 0; i < 20; i++) {

        scanf("%s %lf %s", name, &score, grade);

        if (grade[0] == 'A') {

            if (grade[1] == '+') fl_grade = 4.5;

            else if (grade[1] == '0') fl_grade = 4.0;
        }

        if (grade[0] == 'B') {

            if (grade[1] == '+') fl_grade = 3.5;

            else if (grade[1] == '0') fl_grade = 3.0;
        }

        if (grade[0] == 'C') {

            if (grade[1] == '+') fl_grade = 2.5;

            else if (grade[1] == '0') fl_grade = 2.0;
        }

        if (grade[0] == 'D') {

            if (grade[1] == '+') fl_grade = 1.5;

            else if (grade[1] == '0') fl_grade = 1.0;
        }

        if (grade[0] == 'F') fl_grade = 0;

        if (grade[0] == 'P') continue;

        tot1 += fl_grade * score;

        tot2 += score;

        for (j = 0; j < strlen(name); j++) {
            name[i] = '\0';
        }
    }

    printf("%lf\n", tot1 / tot2);

    return 0;
}