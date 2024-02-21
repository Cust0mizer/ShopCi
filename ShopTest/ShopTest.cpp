#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct SumStruct
{
	void Run()
	{
		int firstValue;
		int secondValue;
		printf_s("Input first value 1\n");
		scanf_s("%d", &firstValue);
		printf_s("Input second value 2\n");
		scanf_s("%d", &secondValue);
		int result = firstValue + secondValue;
		printf("%d + %d = %d", firstValue, secondValue, result);
	}
};

struct DevideStruct
{
	void Run()
	{
		int firstValue;
		int secondValue;
		printf_s("Input first value 1\n");
		scanf_s("%d", &firstValue);
		printf_s("Input second value 2\n");
		scanf_s("%d", &secondValue);
		int result = firstValue + secondValue;
		printf("%d / %d = %d", firstValue, secondValue, result);
	}
};

struct MultiplyStruct
{
	void Run()
	{
		int firstValue;
		int secondValue;
		printf_s("Input first value 1\n");
		scanf_s("%d", &firstValue);
		printf_s("Input second value 2\n");
		scanf_s("%d", &secondValue);
		int result = firstValue * secondValue;
		printf("%d * %d = %d", firstValue, secondValue, result);
	}
};

struct MinusStruct
{
	void Run()
	{
		int firstValue;
		int secondValue;
		printf_s("Input first value 1\n");
		scanf_s("%d", &firstValue);
		printf_s("Input second value 2\n");
		scanf_s("%d", &secondValue);
		int result = firstValue + secondValue;
		printf("%d - %d = %d", firstValue, secondValue, result);
	}
};

bool CheckUserInput(char* text, int minValue, int maxValue, int& inputValue)
{
	printf_s(text);
	scanf_s("%d", &inputValue);

	if (inputValue >= minValue && inputValue <= maxValue)
	{
		return true;
	}
	return false;
}

int main()
{
	int inputValue;
	int* pInputValue = &inputValue;

	struct MultiplyStruct multiply;
	struct MultiplyStruct devide;
	struct MinusStruct minus;
	struct SumStruct sum;

	char description[] = "\n1 - for multiply\n2 - for devide\n3 - for minus\n4 - for sum\n";
	while (true)
	{
		if (CheckUserInput(description, 1, 4, *pInputValue))
		{
			if (inputValue == 1)
			{
				multiply.Run();
			}
			else if (inputValue == 2)
			{
				devide.Run();
			}
			else if (inputValue == 3)
			{
				minus.Run();
			}
			else if (inputValue == 4)
			{
				sum.Run();
			}
		}
	}
	return 0;
}