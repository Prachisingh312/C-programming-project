#include <stdio.h>

// Function to calculate total marks
int getTotal(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float getAverage(int total, int n) {
    return (float)total / n;
}

// Function to determine grade based on average marks
char getGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 75) {
        return 'B';
    } else if (average >= 60) {
        return 'C';
    } else if (average >= 40) {
        return 'D';
    } else {
        return 'F'; // Fail
    }
}

int main() {
    int marks[5];
    int n = 5;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = getTotal(marks, n);
    float average = getAverage(total, n);
    char grade = getGrade(average);

    printf("\n----- Student Marks & Grade Report -----\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    if (grade == 'F') {
        printf("Grade: Fail\n");
    } else {
        printf("Grade: %c\n", grade);
    }
    printf("---------------------------------------\n");

    return 0;
}
