/*
 * Joshua Wilson
 * U8A1
 * Programming Challenges
 * 9 May 2016
 * ET4560
 */

/*
#include <iostream>

using namespace std;

int main()
{
    const int size = 20;

    string names[size] = {"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
                         "Sanchez, Manny", "rubin, Sarah" , "Taylor, Tyrone", "Johnston, Jill",
                         "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
                         "Moretti, Bella", " Wu, Hong", "Patel, Renee", "Harrison, Rose",
                         "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};


    string sortName;
    int min;


    for (int start = 0; start < size - 1; start++ )
    {
        min = start;
        sortName = names[start];

        for (int inner = start+1; inner < size; inner++)
        {

            if (names[inner] < sortName)
            {
                sortName = names[inner];
                min = inner;
            }

        }
        names[min] = names[start];
        names[start] = sortName;
    }


    for (int output = 0; output < size; output++)
    {
        cout << names[output] << endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

// Function prototypes
void displayArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main()
{
    const int SIZE = 8;
    int Array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
    int Array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};

    cout << "\nFirst array stuff.\n";
    displayArray(Array1, SIZE);

    cout << "\nFirst array bubble sorted in ascending order.\n";
    bubbleSort(Array1, SIZE);

    cout << "\nSecond array stuff.\n";
    displayArray(Array2, SIZE);

    cout << "\nSecond array selection sorted in ascending order.\n";
    selectionSort(Array2, SIZE);

    return 0;
}

void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size)
{
    int temp;
    bool swap;

    do
    {   swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
            displayArray(array, size);
        }
    } while (swap);
}

void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;

    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        displayArray(array, size);
    }
}
