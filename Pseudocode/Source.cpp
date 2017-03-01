// Question 1 //
//#include <iostream>
//using namespace std;
//
//void functionThing()
//{
//	int num1;
//	int num2;
//
//	cout << "Enter the first number";
//	cin >> num1;
//	
//	cout << "Enter the second number";
//	cin >> num2;
//
//	int num3 = num1 + num2;
//	int num4 = num3 / 2;
//
//	cout << num4;
//}
//
//void main()
//{
//	functionThing();
//
//	system("Pause");
//}
// Question 1 //

// Question 2 //
//#include <iostream>
//using namespace std;
//
//void NestedWhile(int counter1, int num)
//{
//	counter1 = 1;
//	num = 1;
//
//	while (counter1 <= 5)
//	{
//		while (num < counter1)
//		{
//			cout << num;
//			num++;
//		}
//
//		counter1++;
//	}
//}
//
//void main()
//{
//	int counter = 1;
//	int num = 2;
//
//	NestedWhile(counter, num);
//
//	system("Pause");
//}
// Question 2 //

// Question 3 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int InputData[] = { 1,2,4,8,16,22,40 };
//	int current = InputData[0];
//	int sum = current;
//	bool superIncreasing = true;
//
//	while (current < 7)
//	{
//		for (int i = 0; i < 7; i++)
//		{
//			current = InputData[i];
//
//
//			if (current <= sum)
//			{
//				superIncreasing = false;
//			}
//			else
//			{
//				sum = sum + current;
//			}
//		}
//	}
//
//	if (superIncreasing)
//	{
//		cout << "Input forms a super increasing sequence.";
//	}
//	else
//	{
//		cout << "Input is not super increasing.";
//	}
//
//	system("Pause");
//}
// Question 3 //