#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(float arr[]) {
		for (int i = 0; i < 18; i++) {
				arr[i] = (float)(rand() % 100) / 10;
		}
}

void sortArray(float arr[]) {
		for (int i = 0; i < 17; i++) {
				for (int j = i + 1; j < 18; j++) {
						if (arr[i] < arr[j]) {
								float temp = arr[i];
								arr[i] = arr[j];
								arr[j] = temp;
						}
				}
		}
}

int main() {
		srand(time(NULL));

		float class1[18];
		float class2[18];

		fillArray(class1);
		fillArray(class2);

		printf("Оценки класса 1:\n");
		for (int i = 0; i < 18; i++) {
				printf("%.1f ", class1[i]);
		}
		printf("\n");

		printf("Оценки класса 2:\n");
		for (int i = 0; i < 18; i++) {
				printf("%.1f ", class2[i]);
		}
		printf("\n");

		sortArray(class1);
		sortArray(class2);

		printf("\nОтсортированные оценки класса 1:\n");
		for (int i = 0; i < 18; i++) {
				printf("%.1f ", class1[i]);
		}
		printf("\n");

		printf("Отсортированные оценки класса 2:\n");
		for (int i = 0; i < 18; i++) {
				printf("%.1f ", class2[i]);
		}
		printf("\n");

		// Сравнение оценок третьих учеников
		float thirdStudentClass1 = class1[2];
		float thirdStudentClass2 = class2[2];

		printf("\nСредняя оценка третьего ученика в классе 1: %.1f\n", thirdStudentClass1);
		printf("Средняя оценка третьего ученика в классе 2: %.1f\n", thirdStudentClass2);

		if (thirdStudentClass1 > thirdStudentClass2) {
				printf("Третий ученик в классе 1 имеет более высокую среднюю оценку.\n");
		} else if (thirdStudentClass1 < thirdStudentClass2) {
				printf("Третий ученик в классе 2 имеет более высокую среднюю оценку.\n");
		} else {
				printf("Третьи ученики в обоих классах имеют одинаковую среднюю оценку.\n");
		}
		return 0;
}
