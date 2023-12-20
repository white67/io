#include <iostream>
#include <cmath>
#include <math.h>

int arr[5] = { 1,2,3,4,5 };

int add(int l1, int l2) {
	return l1 + l2;
};
int substract(int l1, int l2) {
	return l1 - l2;
};
int multiply(int l1, int l2) {
	return l1 * l2;
};
int divide(int l1, int l2) {
	return l1 / l2;
};

float ln(float l1) {
	return std::log10(l1);
}

float odchylenie(int tab[]) {
	int n = sizeof(tab);
	float sum = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	float avg = sum / n;

	for (int i = 0; i < n; i++) {
		sum2 += pow(tab[i]-avg, 2);
	}

	float odchylenie = sqrt(sum2 / avg);
	return odchylenie;
}

float exponent(float l1) {
	return exp(l1);
}

float lgDz(float l1) {
	return log10(l1);
};