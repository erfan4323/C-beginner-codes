#include<stdio.h>
#include<string.h>

using namespace std;
 
void printZigZagConcat(char str[], int n)
{
    if (n == 1)
    {
        puts(str);     
        return;
    }  
 
    // Find length of string
    int len = strlen(str);
 
    // Create an array of strings for all n rows
    char arr[n][256];
 
    // Initialize index for array of strings arr[]
    int row = 0;
    bool down; // True if we are moving down in rows,
               // else false
 
    // Traverse through given string
    for (int i = 0; i < len; ++i)
    {
    	// { 1, 2, 3, 4}
    	// { 1, 2, 3, 4}
    	
    	
        // append current character to current row
        strncat(arr[row], &str[i], 1);
 
        // If last row is reached, change direction to 'up'
        if (row == n-1)
          down = false;
 
        // If 1st row is reached, change direction to 'down'
        else if (row == 0)
          down = true;
 
        // If direction is down, increment, else decrement
        if (down)
        {
        	row++;
		} else {
			row--;
		}
    }
    
    char result[256];
 
    // Print result
    for (int i = n-1; i >= 0; i--)
    {
    	strcat(result, arr[i]);
	}
    
    char *finalResult = result+1;
    puts(finalResult);
}
 
// Driver program
int main()
{
    char str[] = "computerBasic";
    int n = 3;
    printZigZagConcat(str, n);
    return 0;
}