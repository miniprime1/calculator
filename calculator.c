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
	float x, y, z, result;
	int opt, n;
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
	printf("\n3. Trigonometric functions");
	printf("\n4. Hyperbolic functions");
	printf("\n5. Exponential and logarithmic functions");
	printf("\n6. Power functions");
	printf("\n7. Error and gamma functions");
	printf("\n8. Rounding and remainder functions");
	printf("\n9. Floating-point manipulation functions");
	printf("\n10. Minimum, maximum, difference functions");
	printf("\n11. Other functions");
	printf("\n12. Mathematical constants");
	printf("\n13. Exit");
	printf("\nEnter choice: ");
	scanf_s("%d", &opt);
	fseek(stdin, 0, SEEK_END);

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
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x + y;
			printf("\nResult");
			printf("\n%f + %f = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x - y;
			printf("\nResult");
			printf("\n%f - %f = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x * y;
			printf("\nResult");
			printf("\n%f * %f = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x / y;
			printf("\nResult");
			printf("\n%f / %f = %f", x, y, result);
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
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter length: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter width: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x * y;
			printf("\nResult");
			printf("\n%f * %f = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter base: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter height: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = (x * y) / 2;
			printf("\nResult");
			printf("\n%f * %f / 2 = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter base1: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter base2: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			printf("Enter height: ");
			scanf_s("%f", &z);
			fseek(stdin, 0, SEEK_END);
			result = (x + y) / 2 * z;
			printf("\nResult");
			printf("\n(%f + %f) / 2 * %f = %f", x, y, z, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter radius: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = x * x;
			printf("\nResult");
			printf("\n%f * %f * pi = %f * pi", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter side: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = x * x;
			printf("\nResult");
			printf("\n%f * %f = %f", x, x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter radius: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter degree: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x * x * (y/360);
			printf("\nResult");
			printf("\n%f^2 * %f/360 = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter base: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter width: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x * y;
			printf("\nResult");
			printf("\n%f * %f = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter axis1: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter axis2: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = x * y;
			printf("\nResult");
			printf("\n%f * %f * pi = %f * pi", x, x, result);
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
	// Trigonometric functions
	//
	else if (opt == 3) {
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
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = cos(x);
			printf("\nResult");
			printf("\ncos(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = sin(x);
			printf("\nResult");
			printf("\nsin(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = tan(x);
			printf("\nResult");
			printf("\ntan(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = acos(x);
			printf("\nResult");
			printf("\nacos(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = asin(x);
			printf("\nResult");
			printf("\nasin(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = atan(x);
			printf("\nResult");
			printf("\natan(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 1st input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = atan2(x, y);
			printf("\nResult");
			printf("\natan2(%f) = %f", x, result);
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
	else if (opt == 4) {
		printf("\nOptions");
		printf("\n1. Compute hyperbolic cosine");
		printf("\n2. Compute hyperbolic sine");
		printf("\n3. Compute hyperbolic tangent");
		printf("\n4. Compute area hyperbolic cosine");
		printf("\n5. Compute area hyperbolic sine");
		printf("\n6. Compute area hyperbolic tangent");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = cosh(x);
			printf("\nResult");
			printf("\ncosh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = sinh(x);
			printf("\nResult");
			printf("\nsinh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = tanh(x);
			printf("\nResult");
			printf("\ntanh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = acosh(x);
			printf("\nResult");
			printf("\nacosh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = asinh(x);
			printf("\nResult");
			printf("\nasinh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = atanh(x);
			printf("\nResult");
			printf("\natanh(%f) = %f", x, result);
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
	else if (opt == 5) {
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
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = log(x);
			printf("\nResult");
			printf("\nlog(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = log10(x);
			printf("\nResult");
			printf("\nlog10(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = ilogb(x);
			printf("\nResult");
			printf("\nilogb(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = log1p(x);
			printf("\nResult");
			printf("\nacosh(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = log2(x);
			printf("\nResult");
			printf("\nlog2(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = logb(x);
			printf("\nResult");
			printf("\nlogb(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = exp(x);
			printf("\nResult");
			printf("\nexp(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = exp2(x);
			printf("\nResult");
			printf("\nexp2(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 9) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = expm1(x);
			printf("\nResult");
			printf("\nexpm1(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 10) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%d", &n);
			fseek(stdin, 0, SEEK_END);
			result = frexp(x, &n);
			printf("\nResult");
			printf("\nfrexp(%f, %d) = %f", x, n, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 11) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = ldexp(x, y);
			printf("\nResult");
			printf("\nldexp(%f, %f) = %f", x, y, result);
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
	if (opt == 6) {
		printf("\nOptions");
		printf("\n1. Raise to power");
		printf("\n2. Square root");
		printf("\n3. Cubic root");
		printf("\n4. Hypotenuse");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = pow(x, y);
			printf("\nResult");
			printf("\npow(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = sqrt(x);
			printf("\nResult");
			printf("\nsqrt(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = cbrt(x);
			printf("\nResult");
			printf("\ncbrt(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = hypot(x, y);
			printf("\nResult");
			printf("\nhypot(%f, %f) = %f", x, y, result);
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
	if (opt == 7) {
		printf("\nOptions");
		printf("\n1. Error function");
		printf("\n2. Complementary error function");
		printf("\n3. Gamma function");
		printf("\n4. Log-gamma function");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = erf(x);
			printf("\nResult");
			printf("\nerf(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = erfc(x);
			printf("\nResult");
			printf("\nerfc(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = tgamma(x);
			printf("\nResult");
			printf("\ntgamma(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = lgamma(x);
			printf("\nResult");
			printf("\nlgamma(%f) = %f", x, result);
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
	else if (opt == 8) {
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
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = ceil(x);
			printf("\nResult");
			printf("\nceil(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = floor(x);
			printf("\nResult");
			printf("\nfloor(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = fmod(x, y);
			printf("\nResult");
			printf("\nfmod(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = trunc(x);
			printf("\nResult");
			printf("\ntrunc(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = round(x);
			printf("\nResult");
			printf("\nround(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 6) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = lround(x);
			printf("\nResult");
			printf("\nlround(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 7) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = llround(x);
			printf("\nResult");
			printf("\nllround(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 8) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = rint(x);
			printf("\nResult");
			printf("\nrint(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 9) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%ld", &longx);
			fseek(stdin, 0, SEEK_END);
			result = lrint(longx);
			printf("\nResult");
			printf("\nlrint(%ld) = %f", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 10) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%ld", &longx);
			fseek(stdin, 0, SEEK_END);
			result = llrint(longx);
			printf("\nResult");
			printf("\nllrint(%ld) = %f", longx, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 11) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = nearbyint(x);
			printf("\nResult");
			printf("\nnearbyint(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		if (opt == 12) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = remainder(x, y);
			printf("\nResult");
			printf("\nremainder(%f, %f) = %f", x, y, result);
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
	if (opt == 9) {
		printf("\nOptions");
		printf("\n1. Copy sign");
		printf("\n2. Next representable value");
		printf("\n3. Next representable value toward precise value");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = copysign(x, y);
			printf("\nResult");
			printf("\ncopysign(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = nextafter(x, y);
			printf("\nResult");
			printf("\nnextafter(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = nexttoward(x, y);
			printf("\nResult");
			printf("\nnexttoward(%f, %f) = %f", x, y, result);
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
	if (opt == 10) {
		printf("\nOptions");
		printf("\n1. Positive difference");
		printf("\n2. Maximum value");
		printf("\n3. Minimum value");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = fdim(x, y);
			printf("\nResult");
			printf("\nfdim(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = fmax(x, y);
			printf("\nResult");
			printf("\nfmax(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = fmin(x, y);
			printf("\nResult");
			printf("\nfmin(%f, %f) = %f", x, y, result);
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
	if (opt == 11) {
		printf("\nOptions");
		printf("\n1. Compute absolute value (fabs)");
		printf("\n2. Compute absolute value (abs)");
		printf("\n3. Multiply-add");
		printf("\n4. Average");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = fabs(x);
			printf("\nResult");
			printf("\nfabs(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\n");
			printf("Enter input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			result = abs(x);
			printf("\nResult");
			printf("\nabs(%f) = %f", x, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 3rd input: ");
			scanf_s("%f", &z);
			fseek(stdin, 0, SEEK_END);
			result = fma(x, y, z);
			printf("\nResult");
			printf("\n%f * %f + %f = %f", x, y, z, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 3) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = fmin(x, y);
			printf("\nResult");
			printf("\nfmin(%f, %f) = %f", x, y, result);
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 4) {
			printf("\n");
			printf("Enter 1st input: ");
			scanf_s("%f", &x);
			fseek(stdin, 0, SEEK_END);
			printf("Enter 2nd input: ");
			scanf_s("%f", &y);
			fseek(stdin, 0, SEEK_END);
			result = (x + y) / 2;
			printf("\nResult");
			printf("\n%f + %f / 2 = %f", x, y, result);
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
	else if (opt == 14) {
		printf("\nOptions");
		printf("\n1. Pi");
		printf("\n2. e");
		printf("\n3. i");
		printf("\n4. Square root of 2");
		printf("\n5. Square root of 3");
		printf("\n6. Square root of 5");
		printf("\n7. Euler–Mascheroni constant");
		printf("\n8. Golden ratio");
		printf("\n9. Bernstein's constant");
		printf("\n10. Omega constant");
		printf("\nEnter choice: ");
		scanf_s("%d", &opt);
		fseek(stdin, 0, SEEK_END);

		if (opt == 1) {
			printf("\nResult");
			printf("\npi = 3.14159265358979323846264338327950288");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 2) {
			printf("\nResult");
			printf("\ne = 271828182845904523536028747135266249");
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
			printf("\nsqrt(2) = 141421356237309504880168872420969807");
			printf("\n\n");
			system("pause");
			return 0;
		}
		else if (opt == 5) {
			printf("\nResult");
			printf("\nsqrt(3) = 1732050807568877293527446341505872368");
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
	else if (opt == 13) {
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