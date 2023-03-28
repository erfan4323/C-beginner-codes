#include<stdio.h>
#include<string.h>

using namespace std;

int threeDigitSum(int arr[], int len, int sum);
int fourDigitSum(int arr[], int len, int sum);

int main(){
	
	int arr[] = {5, 1, 3, 4, 7, 6,9,8};
	int sum = 13;
	int totalCount = 0;
	
	
	totalCount += threeDigitSum(arr, 6, sum);
	totalCount += fourDigitSum(arr, 6, sum);
	
	printf("\nTotal count: %d", totalCount);
	
	
	return 0;
}


int threeDigitSum(int arr[], int len, int sum)
{
	if (len < 3)
	{
		return 0;
	}
	
	int count=0;
	
	for (int i=0; i<len-2; i++)
	{
		for (int j=1; j<len-1; j++)
		{	
			if (arr[i] == arr[j])
			{
				continue;
			}
		
			for (int k=2; k<len; k++)
			{
				
				if (arr[i] == arr[k] || arr[j] == arr[k])
				{
					break;
				}
				
				if (arr[i] + arr[j] + arr[k] <= sum)
				{
					count ++;
					printf("(%d - %d - %d) ", arr[i], arr[j], arr[k]);
				}
			}
		}
	}
	
	return count;
}

int fourDigitSum(int arr[], int len, int sum)
{
	if (len < 4)
	{
		return 0;
	}
	
	int count=0;
	
	for (int i=0; i<len-3; i++)
	{
		
		for (int j=1; j<len-2; j++)
		{
			
			if (arr[i] == arr[j])
			{
				continue;
			}
			
			for (int k=2; k<len-1; k++)
			{
				
				if (arr[i] == arr[k] || arr[j] == arr[k])
				{
					continue;
				}
				
				for(int l=3; l<len; l++)
				{
				
					if (arr[i] == arr[l] || arr[j] == arr[l] || arr[k] == arr[l])
					{
						break;
					}
					
					if (arr[i] + arr[j] + arr[k] + arr[l] <= sum)
					{
						count ++;
						printf("(%d - %d - %d - %d) ", arr[i], arr[j], arr[k], arr[l]);
					}
				}
			}
		}
	}
	
	return count;
}
