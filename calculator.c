#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	double x, y, z, x1, x2, y1, y2, a, b, der, result = 0;
	int intx, inty, opt, n;
	long longx;

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
	printf("\n4. Trigonometric functions");
	printf("\n5. Hyperbolic functions");
	printf("\n6. Exponential and logarithmic functions");
	printf("\n7. Power functions");
	printf("\n8. Error and gamma functions");
	printf("\n9. Rounding and remainder functions");
	printf("\n10. Floating-point manipulation functions");
	printf("\n11. Minimum, maximum, difference functions");
	printf("\n12. Other functions");
	printf("\n13. Mathematical constants");
	printf("\n14. Exit");
	printf("\nEnter choice: ");
	scanf_s("%d", &opt);
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
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	else if (opt == 2) {
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
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter length: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter width: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\n%lf * %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter base: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter height: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = (x * y) / 2;
			printf("\nResult");
			printf("\n%lf * %lf / 2 = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter base1: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter base2: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter height: ");
			scanf_s("%lf", &z);
			fseek(stdin, 0, SEEK_SET);
			result = (x + y) / 2 * z;
			printf("\nResult");
			printf("\n(%lf + %lf) / 2 * %lf = %lf", x, y, z, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter radius: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = x * x;
			printf("\nResult");
			printf("\n%lf * %lf * pi = %lf * pi", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter side: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = x * x;
			printf("\nResult");
			printf("\n%lf * %lf = %lf", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter radius: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter degree: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * x * (y / 360);
			printf("\nResult");
			printf("\n%lf^2 * %lf/360 = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter base: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter width: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\n%lf * %lf = %lf", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter axis1: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter axis2: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			result = x * y;
			printf("\nResult");
			printf("\n%lf * %lf * pi = %lf * pi", x, x, result);
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
	else if (opt == 3) {
		printf("\nOptions");
		printf("\n1. Derivative calculator");
		printf("\n2. Definite Integral calculator");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\nOptions\n");
			printf("1. Derivative of Trigonometric functions\n");
			printf("2. Derivative of Exponential and logarithmic functions\n");
			printf("3. Derivative of Power functions\n");
			printf("Enter choice: ");
			scanf_s("%d", &opt);
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
				scanf_s("%d", &opt);
				fseek(stdin, 0, SEEK_SET);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = cos(x1); y2 = cos(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\ncos'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = sin(x1); y2 = sin(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nsin'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = tan(x1); y2 = tan(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\ntan'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 4) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = acos(x1); y2 = acos(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\narccos'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 5) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = asin(x1); y2 = asin(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\narcsin'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 6) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = atan(x1); y2 = atan(x2);
					der = (y2 - y1) / (x2 - x1);
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
				scanf_s("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = exp(x1); y2 = exp(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nexp'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = log(x1); y2 = log(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nlog'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = log10(x1); y2 = log10(x2);
					der = (y2 - y1) / (x2 - x1);
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
				scanf_s("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = sqrt(x1); y2 = sqrt(x2);
					der = (y2 - y1) / (x2 - x1);
					printf("\nsqrt'(%lf) = %lf\n", a, der);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter a: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					x1 = a - h; x2 = a + h; y1 = cbrt(x1); y2 = cbrt(x2);
					der = (y2 - y1) / (x2 - x1);
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
		else if (opt == 2) {
			printf("\nOptions\n");
			printf("1. Definite Integral of Trigonometric functions\n");
			printf("2. Definite Integral of Exponential and logarithmic functions\n");
			printf("3. Definite Integral of Power functions\n");
			printf("Enter choice: ");
			scanf_s("%d", &opt);
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
				scanf_s("%d", &opt);
				fseek(stdin, 0, SEEK_SET);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) {result += cos(a + (b - a) / inf * k) * delta;}
					printf("\nIntegrate(cos, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += sin(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(sin, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += tan(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(tan, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 4) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += acos(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(arccos, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 5) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += asin(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(arcsin, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 6) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += atan(a + (b - a) / inf * k) * delta; }
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
				scanf_s("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += exp(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(exp, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += log(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(log, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 3) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += log10(a + (b - a) / inf * k) * delta; }
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
				scanf_s("%d", &opt);
				printf("\n");

				if (opt == 1) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += sqrt(a + (b - a) / inf * k) * delta; }
					printf("\nIntegrate(sqrt, {x, %lf, %lf}) = %lf\n", a, b, result);
					printf("\n");
					system("pause");
					return 0;
				}
				else if (opt == 2) {
					printf("Enter upper bound: ");
					scanf_s("%lf", &b);
					printf("Enter lower bound: ");
					scanf_s("%lf", &a);
					fseek(stdin, 0, SEEK_SET);
					double delta = (a - b) / inf;
					for (int k = 1; k < inf; k++) { result += cbrt(a + (b - a) / inf * k) * delta; }
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
	// Trigonometric functions
	//
	else if (opt == 4) {
		printf("\nOptions");
		printf("\n1. Compute cosine");
		printf("\n2. Compute sine");
		printf("\n3. Compute tangent");
		printf("\n4. Compute arc cosine");
		printf("\n5. Compute arc sine");
		printf("\n6. Compute arc tangent");
		printf("\n7. Compute arc tangent with two parameters");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 1st input: ");
			scanf_s("%lf", &y);
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
	else if (opt == 5) {
		printf("\nOptions");
		printf("\n1. Compute hyperbolic cosine");
		printf("\n2. Compute hyperbolic sine");
		printf("\n3. Compute hyperbolic tangent");
		printf("\n4. Compute area hyperbolic cosine");
		printf("\n5. Compute area hyperbolic sine");
		printf("\n6. Compute area hyperbolic tangent");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
	else if (opt == 6) {
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
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = expm1(x);
			printf("\nResult");
			printf("\nexpm1(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 10) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%d", &n);
			fseek(stdin, 0, SEEK_SET);
			result = frexp(x, &n);
			printf("\nResult");
			printf("\nfrexp(%lf, %d) = %lf", x, n, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 11) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%d", &intx);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%d", &inty);
			fseek(stdin, 0, SEEK_SET);
			result = ldexp(intx, inty);
			printf("\nResult");
			printf("\nldexp(%lf, %lf) = %lf", intx, inty, result);
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
	if (opt == 7) {
		printf("\nOptions");
		printf("\n1. Raise to power");
		printf("\n2. Square root");
		printf("\n3. Cubic root");
		printf("\n4. Hypotenuse");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	if (opt == 8) {
		printf("\nOptions");
		printf("\n1. Error function");
		printf("\n2. Complementary error function");
		printf("\n3. Gamma function");
		printf("\n4. Log-gamma function");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
	else if (opt == 9) {
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
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%ld", &longx);
			fseek(stdin, 0, SEEK_SET);
			result = lrint(longx);
			printf("\nResult");
			printf("\nlrint(%ld) = %lf", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 10) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%ld", &longx);
			fseek(stdin, 0, SEEK_SET);
			result = llrint(longx);
			printf("\nResult");
			printf("\nllrint(%ld) = %lf", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 11) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			result = nearbyint(x);
			printf("\nResult");
			printf("\nnearbyint(%lf) = %lf", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 12) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	if (opt == 10) {
		printf("\nOptions");
		printf("\n1. Copy sign");
		printf("\n2. Next representable value");
		printf("\n3. Next representable value toward precise value");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	if (opt == 11) {
		printf("\nOptions");
		printf("\n1. Positive difference");
		printf("\n2. Maximum value");
		printf("\n3. Minimum value");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	if (opt == 12) {
		printf("\nOptions");
		printf("\n1. Compute absolute value (fabs)");
		printf("\n2. Compute absolute value (abs)");
		printf("\n3. Multiply-add");
		printf("\n4. Average");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 3rd input: ");
			scanf_s("%lf", &z);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
			scanf_s("%lf", &x);
			fseek(stdin, 0, SEEK_SET);
			printf("Enter 2nd input: ");
			scanf_s("%lf", &y);
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
	else if (opt == 13) {
		printf("\nOptions");
		printf("\n1. Pi");
		printf("\n2. e");
		printf("\n3. i");
		printf("\n4. Square root of 2");
		printf("\n5. Square root of 3");
		printf("\n6. Square root of 5");
		printf("\n7. Euler-Mascheroni constant");
		printf("\n8. Golden ratio");
		printf("\n9. Bernstein's constant");
		printf("\n10. Omega constant");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_SET);

		if (opt == 1) {
			printf("\nResult");
			printf("\npi = 3.14159265358979323846264338327950288");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\nResult");
			printf("\ne = 2.71828182845904523536028747135266249");
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
			printf("\nsqrt(2) = 1.41421356237309504880168872420969807");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\nResult");
			printf("\nsqrt(3) = 1.732050807568877293527446341505872368");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\nResult");
			printf("\nsqrt(5) = 2.23606797749978969640917366873127623");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\nResult");
			printf("\ngamma = 0.57721566490153286060651209008240243");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\nResult");
			printf("\nphi = 1.61803398874989484820458683436563811");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 9) {
			printf("\nResult");
			printf("\nbeta = 0.28016949902386913303");
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 10) {
			printf("\nResult");
			printf("\nomega = 0.56714329040978387299996866221035554");
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
	else if (opt == 14) {
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