#include<iostream>
using namespace std;
/*Dvoxvimirniy massiv */

void main()
{
	int rows, cols;
	cout << "Enter amount of rows smaler or even  5  :";
	cin >> rows;
	cout << "Enter amount of cols smaler or even 3   :";
	cin >> cols;
	/////////////////////////////////////
	float x[5] = { 2.1,0.5,-1.4,4.2,0.1 };
	float y[3] = { 0,-0.2,1.5 };
	if (rows > 5 || cols > 3)
	{
		cout << "Ti cho ebal blet ???? " << endl;
		cout << "Tebe chiytat ne nauchili ???"<<endl;
		system("pause");
	}
	else
	{
		float **arr = new float*[rows];

		for (int i = 0; i < rows; i++)
		{
			arr[i] = new float[cols];
		}
		///////////////////////////rand() % 12 -3///////////
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = x[i] * y[j];
			}
		}
		cout << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << "  " << arr[i][j] << "\t";
			}
			cout << endl;
		}
		float max = arr[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (arr[i][j] > max)
					max = arr[i][j];

			}
			cout << endl;
		}
		cout << "Maximalniy element  = " << max << "\t";


		////////////////////////////////////
		for (int i = 0; i < rows; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		system("pause");
	}
}
void Task2()
{
	int rows, cols;
	cout << "Enter amount of rows < 5 ";
	cin >> rows;
	cout << "Enter amount of cols <= 4 ";
	cin >> cols;
	if (rows >= 5 || cols > 4)
	{
		cout << "Ti cho daun blet ???? " << endl;
		cout << "Tebe chiytat ne nauchili ???";
	}
	else
	{
		int **arr = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}




		for (int i = 0; i < rows; i++)
		{
			delete[]	arr[i];
		}
		delete[] arr;
	}
}