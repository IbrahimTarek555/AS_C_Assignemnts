/* 
 * It is a comparison between the Selection, Bubble, Insertion Sorts,
 * icluding these points:
 * 1- Idea
 * 2- Data Sensitivity
 * 3- Time Complexity
 * 4- Space Complexity
 * 5- Stability
 * 6- Data Movements
 */
 
/*
 * For Selection Sort,
 * 1- Idea: search for the smallest number, then put it in his correct position.
 * 2- Data Sensitivity: not a data sensitive,
 *    Best Case scenario (already ordered): O(n^2)
 * 	  Worst Case Scenario (in reversed order): O(n^2)
 * 3- Time Complexity: c1 + (n-1) c2 + ((n-1)/2)*n c3 + (n-1) c4 == O(n^2)
 * 4- Space Complexity: O(1)
 * 5- Stability: unstable
 * 6- Data Movements: suitable number of movements
 *	  				  in the worst case it will be ((n-1)/2) movements
 */
 
/*
 * For Bubble Sort,
 * 1- Idea: compare each element with its adjecent, and if the second one is smaller than the first one swab them.
 * 2- Data Sensitivity: data sensitive (with a small improvement),
 *    Best Case scenario (already ordered): O(n)
 * 	  Worst Case Scenario (in reversed order): O(n^2)
 * 3- Time Complexity: c1 + (n-2) c2 + ((n-2)/2)*n c3 + (n-2) c4 == O(n^2)
 * 4- Space Complexity: O(1)
 * 5- Stability: stable
 * 6- Data Movements: big number of movements
 *	  				  in the worst case it will be ((n-2)/2)*n movements
 */
 
/*
 * For Insertion Sort,
 * 1- Idea: devide the elements into sorted array and unsorted array then insert each element in its proper position in the sorted o/p list.
 * 2- Data Sensitivity: data sensitive,
 *    Best Case scenario (already ordered): O(n)
 * 	  Worst Case Scenario (in reversed order): O(n^2)
 * 3- Time Complexity: c1 + ((n-1)/2)*n c2 == O(n^2)
 * 4- Space Complexity: O(1)
 * 5- Stability: stable
 * 6- Data Movements: big number of movements
 *	  				  in the worst case it will be (n-1)/2)*(n+4) movements
 */
 
 

/*Functions' Implementation*/
//c1 + (n-1) c2 + ((n-1)/2)*n c3 + (n-1) c4
void SelectionSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, SmallestIndex; 		/*c1*/
	
	/*Passing over all Array elements*/
	for(i = 0; i < (Size - 1); i++)		/*((n-1)/2)*n iterations*/ /*This is multiplied by c3*/
	{
		/*Updating minimum index*/
		SmallestIndex = i;				/*(n-1) c2*/
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = (i + 1); j < Size; j++)		/*decremental number of iterations every outer loop*/
		{
			/*Checking if the current element is smaller than the minimum index element*/
			if(Arr[j] < Arr[SmallestIndex])	/*((n-1)/2)*n c3*/
			{
				/*Updating minimum index*/
				SmallestIndex = j;
			}
		}
		
		/*Checking if the element is already sorted*/
		if(SmallestIndex != i)				/*(n-1) c4*/
		{
			/*Swaping between minimum index and element that we sort*/
			Temp = Arr[i];
			Arr[i] = Arr[SmallestIndex];
			Arr[SmallestIndex] = Temp;
		}
	}
}

//c1 + (n-2) c2 + ((n-2)/2)*n c3 + (n-2) c4
void BubbleSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, SortingDone; 	/*c1*/
	
	/*Passing over all Array elements*/
	for(i = (Size - 1); i > 0; i--)		/*((n-2)/2)*n iterations*/ /*This is multiplied by c3*/
	{
		/*Setting a flag to inform that the elements are already sorted or not*/
		SortingDone = 1;	/*(n-2) c2*/
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = 0; j < i; j++)
		{
			/*Swapping if the first element is bigger than the second one*/
			if(Arr[j] > Arr[j + 1])		/*((n-2)/2)*n c3*/
			{
				Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
				
				/*If there are swaps clear the flag, otherwise keep it up*/
				SortingDone = 0;
			}
		}
		
		if(SortingDone == 1)	/*(n-2) c4*/
		{
			break;
		}
	}
}


void InsertionSortAscending(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, k, Temp;		/*c1*/
	
	/*Passing over all Array elements*/
	for(i = 1; i < Size; i++)
	{
		/*Passing over the elements from the beginning to the element we sort*/
		for(j = 0; j < i; j++)
		{
			/*
			 * sice we reached the right location of the element,
			 * shift the elements to the right,
			 * then break the loop because we already sort this element.
			 */
			if(Arr[i] > Arr[j])		/*((n-1)/2)*n c2*/
			{
				Temp = Arr[i];
				
				/*Shifting elements to the right from the location of the element we sort til its location before sorting*/
				for(k = i; k > j; k--)
				{
					Arr[k] = Arr[k - 1];	/*I will consider this as a constant because it will be a small number of iterations every outer loop*/
				}
				
				/*Locating the element we sort in its sorted location*/
				Arr[j] = Temp;
				
				/*going out from the loop because we already sort this element*/
				break;
			}
		}
	}
}
