#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.141592653589793238462643383279502884197169399375
#define E 2.718281828459045235360287471352662497757247093699
#define SQRT_2 1.414213562373095048801688724209698078569671875376
#define SQRT_3 1.732050807568877293527446341505872366942805253810
#define SQRT_5 2.236067977499789696409173668731276235440618359611
#define GAMMA 0.577215664901532860606512090082402431042159335939
#define PHI 1.618033988749894848204586834365638117720309179805 

int main() {
	//
	// Background-process
	//
	system("cls");
	system("title CLI Calculator");

	//
	// Variables
	//
	const double h = 1.0e-6, inf = (double)100000000;
	double x = 0, y = 0, z = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, der = 0, result = 0;
	double a = 0, b = 0, c = 0, D = 0;
	int intx = 0, inty = 0, opt = 0, n = 0;
	long longx = 0;
	double x1_Eq = 0, x2_Eq = 0;
	char* result_Eq = "null";

	//
	// Info
	//
	printf("CLI Calculator, version 1.0\n");
	printf("Copyright (C) 2020 miniprime1. All rights reserved.\n");
	printf("Configured for \"x86_64-w64-mingw32\".\n");

	//
	// Options
	//
	printf("\nOptions");
	printf("\n1. The basic arithmetic operations");
	printf("\n2. Area calculator");
	printf("\n3. Calculus calculator");
	printf("\n4. Equation solver");
	printf("\n5. Trigonometric functions");
	printf("\n6. Hyperbolic functions");
	printf("\n7. Exponential and logarithmic functions");
	printf("\n8. Power functions");
	printf("\n9. Error and gamma functions");
	printf("\n10. Rounding and remainder functions");
	printf("\n11. Floating-point manipulation functions");
	printf("\n12. Minimum, maximum, difference functions");
	printf("\n13. Other functions");
	printf("\n14. Mathematical constants");
	printf("\n15. Exit");
	printf("\nEnter choice: ");
	scanf("%d", &opt);
	fseek(stdin, 0, SEEK_SET);

	//
	// The basic arithmetic operations
	//
	if (opt == 1) {
		printf("\nOptions");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x + y;
			printf("\nResult");
			printf("\n%lf + %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x - y;
			printf("\nResult");
			printf("\n%lf - %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\n%lf * %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x / y;
			printf("\nResult");
			printf("\n%lf / %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Area calculator
	//
	if (opt == 2) {
		printf("\nOptions");
		printf("\n1. Rectangle");
		printf("\n2. Triangle");
		printf("\n3. Trapezoid");
		printf("\n4. Circle");
		printf("\n5. Square");
		printf("\n6. Sector");
		printf("\n7. Parallelogram");
		printf("\n8. Ellipse");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter length: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter width: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\nS = %lf * %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter base: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter height: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = (x * y) / 2;
			printf("\nResult");
			printf("\nS = %lf * %lf / 2 = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter base1: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter base2: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter height: ");
			scanf("%lf", &z);
			fseek(stdin, 0, SEEK_SET);
			result = (x + y) / 2 * z;
			printf("\nResult");
			printf("\nS = (%lf + %lf) / 2 * %lf = %lf", x, y, z, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter radius: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = x * x * PI;
			printf("\nResult");
			printf("\nS = %lf * %lf * pi = %lf", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter side: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = x * x;
			printf("\nResult");
			printf("\nS = %lf * %lf = %lf", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter radius: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter degree(deg): ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * x * (y / 360);
			printf("\nResult");
			printf("\nS = %lf^2 * %lf/360 = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter base: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter width: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\nS = n%lf * %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter axis1: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter axis2: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y * PI;
			printf("\nResult");
			printf("\nS = %lf * %lf * pi = %lf", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Calculus calculator
	//
	if (opt == 3) {
		printf("\nOptions");
		printf("\n1. Derivative calculator");
		printf("\n2. Definite Integral calculator");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\nOptions\n");
			printf("1. Derivative of Trigonometric functions\n");
			printf("2. Derivative of Exponential and logarithmic functions\n");
			printf("3. Derivative of Power functions\n");
			printf("Enter choice: ");
			scanf("%d", &opt);
			fseek(stdin, 0, SEEK_SET);
			printf("\n");

			if (opt == 1) {
				printf("Options\n");
				printf("1. Compute derivative of cosine\n");
				printf("2. Compute derivative of sine\n");
				printf("3. Compute derivative of tangent\n");
				printf("4. Compute derivative of arc cosine\n");
				printf("5. Compute derivative of arc sine\n");
				printf("6. Compute derivative of arc tangent\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				fseek(stdin, 0, SEEK_SET);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = cos(x1); y2 = cos(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\ncos'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = sin(x1); y2 = sin(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\nsin'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = tan(x1); y2 = tan(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\ntan'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 4) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = acos(x1); y2 = acos(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\narccos'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 5) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = asin(x1); y2 = asin(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\narcsin'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 6) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = atan(x1); y2 = atan(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\narctan'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else if (opt == 2) {
				printf("Options\n");
				printf("1. Compute derivative of exponential function\n");
				printf("2. Compute derivative of natural logarithm\n");
				printf("3. Compute derivative of common logarithm\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = exp(x1); y2 = exp(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\nexp'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = log(x1); y2 = log(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\nlog'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = log10(x1); y2 = log10(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\nlog10'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else if (opt == 3) {
				printf("Options\n");
				printf("1. Compute derivative of square root\n");
				printf("2. Compute derivative of cubic root\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = sqrt(x1); y2 = sqrt(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\nsqrt'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = cbrt(x1); y2 = cbrt(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nResult");
					printf("\ncbrt'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else {
				printf("\n");
				printf("Error: invalid choice");
				printf("\n\n");
				system("pause");
				return 1;
			}
		}
		if (opt == 2) {
			printf("\nOptions\n");
			printf("1. Definite Integral of Trigonometric functions\n");
			printf("2. Definite Integral of Exponential and logarithmic functions\n");
			printf("3. Definite Integral of Power functions\n");
			printf("Enter choice: ");
			scanf("%d", &opt);
			fseek(stdin, 0, SEEK_SET);
			printf("\n");

			if (opt == 1) {
				printf("Options\n");
				printf("1. Compute Definite Integral of cosine\n");
				printf("2. Compute Definite Integral of sine\n");
				printf("3. Compute Definite Integral of tangent\n");
				printf("4. Compute Definite Integral of arc cosine\n");
				printf("5. Compute Definite Integral of arc sine\n");
				printf("6. Compute Definite Integral of arc tangent\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				fseek(stdin, 0, SEEK_SET);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += cos(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(cos, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += sin(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(sin, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += tan(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(tan, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 4) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += acos(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(arccos, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 5) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += asin(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(arcsin, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 6) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += atan(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(arctan, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else if (opt == 2) {
				printf("Options\n");
				printf("1. Compute Definite Integral of exponential function\n");
				printf("2. Compute Definite Integral of natural logarithm\n");
				printf("3. Compute Definite Integral of common logarithm\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += exp(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(exp, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += log(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(log, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += log10(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(log10, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else if (opt == 3) {
				printf("Options\n");
				printf("1. Compute Definite Integral of square root\n");
				printf("2. Compute Definite Integral of cubic root\n");
				printf("Enter choice: ");
				scanf("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += sqrt(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(sqrt, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf("%lf", &b);
					printf("Enter lower bound: ");
					scanf("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (b - a) / inf;
					for (int k = 1; k < inf; k++) { result += cbrt(a + delta * k) * delta; }
					printf("\nResult");
					printf("\nIntegrate(cbrt, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else {
					printf("\n");
					printf("Error: invalid choice");
					printf("\n\n");
					system("pause");
					return 1;
				}
			}
			else {
				printf("\n");
				printf("Error: invalid choice");
				printf("\n\n");
				system("pause");
				return 1;
			}
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			return 1;
		}
	}

	//
	// Equation solver
	//
	if (opt == 4) {
		printf("\nOptions\n");
		printf("1. Constant Equation (a=0)\n");
		printf("2. Linear Equation (ax+b=0)\n");
		printf("3. Quadratic Equation (ax^2+bx+c=0)\n");
		printf("Enter option: "); 
		scanf("%d", &opt);

		printf("\n");

		if (opt == 1) {
			printf("Enter a: "); 
			scanf("%lf", &a);
			if (a == 0) { result_Eq = "There is contless solution."; }
			else { result_Eq = "There is no solution."; }
			printf("\n");
			printf("Result\n");
			printf("%s", result_Eq);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("Enter a: "); 
			scanf("%lf", &a);
			printf("Enter b: "); 
			scanf("%lf", &b);
			if (a == 0) { 
				if (b == 0) { result_Eq = "There is contless solution."; }
				else { result_Eq = "There is no solution."; }
			}
			else { 
				x1_Eq = -b / a; 
			}
			printf("\n");
			printf("Result\n");
			if (result_Eq == "null") { printf("x1 = %lf", x1_Eq); }
			else { printf("%s", result_Eq); }
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("Enter a: ");
			scanf("%lf", &a);
			printf("Enter b: ");
			scanf("%lf", &b);
			printf("Enter c: ");
			scanf("%lf", &c);
			if (a == 0) {
				if (b == 0) {
					if (c == 0) { result_Eq = "There is contless solution."; }
					else { result_Eq = "There is no solution."; }
				}
				else {
					x1_Eq = -c / b;
					x2_Eq = -c / b;
				}
			}
			else {
				D = b * b - 4 * a * c;
				if (D >= 0) {
					D = sqrt(D);
					x1_Eq = (-b + D) / (2 * a);
					x2_Eq = (-b - D) / (2 * a);
				}
				else {
					x1_Eq = nan("");
					x2_Eq = nan("");
				}
			}
			printf("\n");
			printf("Result\n");
			if (result_Eq == "null") {
				printf("x1 = %lf\n", x1_Eq); 
				printf("x2 = %lf", x2_Eq);
			}
			else { printf("%s", result_Eq); }
			printf("\n\n");
			system("pause");
			return 0;
		}
	}


	//
	// Trigonometric functions
	//
	if (opt == 5) {
		printf("\nOptions");
		printf("\n1. Compute cosine");
		printf("\n2. Compute sine");
		printf("\n3. Compute tangent");
		printf("\n4. Compute arc cosine");
		printf("\n5. Compute arc sine");
		printf("\n6. Compute arc tangent");
		printf("\n7. Compute arc tangent with two parameters");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = cos(x);
			printf("\nResult");
			printf("\ncos(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = sin(x);
			printf("\nResult");
			printf("\nsin(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = tan(x);
			printf("\nResult");
			printf("\ntan(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = acos(x);
			printf("\nResult");
			printf("\nacos(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = asin(x);
			printf("\nResult");
			printf("\nasin(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = atan(x);
			printf("\nResult");
			printf("\natan(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 1st input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = atan2(x, y);
			printf("\nResult");
			printf("\natan2(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Hyperbolic functions
	//
	if (opt == 6) {
		printf("\nOptions");
		printf("\n1. Compute hyperbolic cosine");
		printf("\n2. Compute hyperbolic sine");
		printf("\n3. Compute hyperbolic tangent");
		printf("\n4. Compute area hyperbolic cosine");
		printf("\n5. Compute area hyperbolic sine");
		printf("\n6. Compute area hyperbolic tangent");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = cosh(x);
			printf("\nResult");
			printf("\ncosh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = sinh(x);
			printf("\nResult");
			printf("\nsinh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = tanh(x);
			printf("\nResult");
			printf("\ntanh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = acosh(x);
			printf("\nResult");
			printf("\nacosh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = asinh(x);
			printf("\nResult");
			printf("\nasinh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = atanh(x);
			printf("\nResult");
			printf("\natanh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Exponential and logarithmic functions
	//
	if (opt == 7) {
		printf("\nOptions");
		printf("\n1. Natural Logarithm");
		printf("\n2. Common Logarithm");
		printf("\n3. Integer Binary Logarithm");
		printf("\n4. Logarithm + 1");
		printf("\n5. Binary Logarithm");
		printf("\n6. floating-point Base Logarithm");
		printf("\n7. Exponential Function");
		printf("\n8. Binary Exponential Function");
		printf("\n9. Exponential - 1");
		printf("\n10. Get significant and exponent");
		printf("\n11. Generate value from significant and exponent");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = log(x);
			printf("\nResult");
			printf("\nlog(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = log10(x);
			printf("\nResult");
			printf("\nlog10(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = ilogb(x);
			printf("\nResult");
			printf("\nilogb(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = log1p(x);
			printf("\nResult");
			printf("\nacosh(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = log2(x);
			printf("\nResult");
			printf("\nlog2(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = logb(x);
			printf("\nResult");
			printf("\nlogb(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = exp(x);
			printf("\nResult");
			printf("\nexp(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = exp2(x);
			printf("\nResult");
			printf("\nexp2(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 9) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = expm1(x);
			printf("\nResult");
			printf("\nexpm1(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 10) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%d", &n);
			fseek(stdin, 0, SEEK_SET);
			result = frexp(x, &n);
			printf("\nResult");
			printf("\nfrexp(%lf, %d) = %lf", x, n, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 11) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%d", &intx);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%d", &inty);
			fseek(stdin, 0, SEEK_SET);
			result = ldexp(intx, inty);
			printf("\nResult");
			printf("\nldexp(%d, %d) = %lf", intx, inty, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Power functions
	//
	if (opt == 8) {
		printf("\nOptions");
		printf("\n1. Raise to power");
		printf("\n2. Square root");
		printf("\n3. Cubic root");
		printf("\n4. Hypotenuse");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = pow(x, y);
			printf("\nResult");
			printf("\npow(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = sqrt(x);
			printf("\nResult");
			printf("\nsqrt(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = cbrt(x);
			printf("\nResult");
			printf("\ncbrt(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = hypot(x, y);
			printf("\nResult");
			printf("\nhypot(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Error and gamma functions
	//
	if (opt == 9) {
		printf("\nOptions");
		printf("\n1. Error function");
		printf("\n2. Complementary error function");
		printf("\n3. Gamma function");
		printf("\n4. Log-gamma function");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = erf(x);
			printf("\nResult");
			printf("\nerf(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = erfc(x);
			printf("\nResult");
			printf("\nerfc(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = tgamma(x);
			printf("\nResult");
			printf("\ntgamma(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = lgamma(x);
			printf("\nResult");
			printf("\nlgamma(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Rounding and remainder functions
	//
	if (opt == 10) {
		printf("\nOptions");
		printf("\n1. Round up value");
		printf("\n2. Round down value");
		printf("\n3. Remainder of division");
		printf("\n4. Truncate value");
		printf("\n5. Round to nearest");
		printf("\n6. Round to nearest and cast to long integer");
		printf("\n7. Round to nearest and cast to long long integer");
		printf("\n8. Round to integral value");
		printf("\n9. Round and cast to long integer");
		printf("\n10. Round and cast to long long integer");
		printf("\n11. Round to nearby integral value");
		printf("\n12. Remainder (IEC 60559)");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = ceil(x);
			printf("\nResult");
			printf("\nceil(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = floor(x);
			printf("\nResult");
			printf("\nfloor(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = fmod(x, y);
			printf("\nResult");
			printf("\nfmod(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = trunc(x);
			printf("\nResult");
			printf("\ntrunc(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = round(x);
			printf("\nResult");
			printf("\nround(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = lround(x);
			printf("\nResult");
			printf("\nlround(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = llround(x);
			printf("\nResult");
			printf("\nllround(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = rint(x);
			printf("\nResult");
			printf("\nrint(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 9) {
			printf("\n");
			printf("Enter input: ");
			scanf("%ld", &longx);
			fseek(stdin, 0, SEEK_SET);
			result = lrint(longx);
			printf("\nResult");
			printf("\nlrint(%ld) = %lf", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 10) {
			printf("\n");
			printf("Enter input: ");
			scanf("%ld", &longx);
			fseek(stdin, 0, SEEK_SET);
			result = llrint(longx);
			printf("\nResult");
			printf("\nllrint(%ld) = %lf", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 11) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = nearbyint(x);
			printf("\nResult");
			printf("\nnearbyint(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 12) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = remainder(x, y);
			printf("\nResult");
			printf("\nremainder(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Floating-point manipulation functions
	//
	if (opt == 11) {
		printf("\nOptions");
		printf("\n1. Copy sign");
		printf("\n2. Next representable value");
		printf("\n3. Next representable value toward precise value");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = copysign(x, y);
			printf("\nResult");
			printf("\ncopysign(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = nextafter(x, y);
			printf("\nResult");
			printf("\nnextafter(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = nexttoward(x, y);
			printf("\nResult");
			printf("\nnexttoward(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Minimum, maximum, difference functions
	//
	if (opt == 12) {
		printf("\nOptions");
		printf("\n1. Positive difference");
		printf("\n2. Maximum value");
		printf("\n3. Minimum value");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = fdim(x, y);
			printf("\nResult");
			printf("\nfdim(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = fmax(x, y);
			printf("\nResult");
			printf("\nfmax(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = fmin(x, y);
			printf("\nResult");
			printf("\nfmin(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Other functions
	//
	if (opt == 13) {
		printf("\nOptions");
		printf("\n1. Compute absolute value (fabs)");
		printf("\n2. Compute absolute value (abs)");
		printf("\n3. Multiply-add");
		printf("\n4. Average");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = fabs(x);
			printf("\nResult");
			printf("\nfabs(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = abs(x);
			printf("\nResult");
			printf("\nabs(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 3rd input: ");
			scanf("%lf", &z);
			fseek(stdin, 0, SEEK_SET);
			result = fma(x, y, z);
			printf("\nResult");
			printf("\n%lf * %lf + %lf = %lf", x, y, z, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = fmin(x, y);
			printf("\nResult");
			printf("\nfmin(%lf, %lf) = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = (x + y) / 2;
			printf("\nResult");
			printf("\n%lf + %lf / 2 = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Mathematical constants
	//
	if (opt == 14) {
		printf("\nOptions");
		printf("\n1. Pi: Circumference");
		printf("\n2. E: Napier's constant");
		printf("\n3. I: Imaginary number");
		printf("\n4. Sqrt(2): Square root of 2");
		printf("\n5. Sqrt(2): Square root of 3");
		printf("\n6. Sqrt(2): Square root of 5");
		printf("\n7. Gamma: Euler-Mascheroni constant");
		printf("\n8. Phi: Golden ratio");
		printf("\nEnter choice: ");
		scanf("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\nResult");
			printf("\npi = %1.48f", PI);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\nResult");
			printf("\ne = %1.48f", E);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\nResult");
			printf("\ni = sqrt(-1) [nan]");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\nResult");
			printf("\nsqrt(2) = %1.48f", SQRT_2);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\nResult");
			printf("\nsqrt(3) = %1.48f", SQRT_3);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\nResult");
			printf("\nsqrt(5) = %1.48f", SQRT_5);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\nResult");
			printf("\ngamma = %1.48f", GAMMA);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\nResult");
			printf("\nphi = %1.48f", PHI);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else {
			printf("\n");
			printf("Error: invalid choice");
			printf("\n\n");
			system("pause");
			return 1;
		}
	}

	//
	// Exit
	//
	if (opt == 15) {
		return 0;
	}

	//
	// Exception: Invalid Choice
	//
	else {
		printf("\n");
		printf("Error: invalid choice");
		printf("\n\n");
		system("pause");
		return 1;
	}

	return 0;
}
