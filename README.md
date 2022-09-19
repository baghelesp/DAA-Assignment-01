# DAA-Assignment-01
##### Name : Shivam Baghele
##### Sec  : A
##### Roll No : 63
##### Branch : CSE - A
##### Subject : DAA 

## PROBLEM STATEMENT
##### Accept a One dimensional array using random number generator. The array may be in the range of [0,1,2] [Only three numbers are permitted]. Scan the array and print "X" if number "0" is more than number of "1" and "2".Print "Y" if number of "1" are more than "0" and "2".Print "Z" if number of "2" are more than "0" and "1".Expected complexity O(log n).


## Algorithm

##### 1) Input a Array of Size n in range of [0,1,2].
##### 2) Sort a Array
##### 3) Search a number using Binary Search Algorithm and save the index of that number ( index=BinarySearch(Array, numberToBeSearch) )
##### 4) let  left = index - 1   and  right = index + 1;
##### 5) Traverse the left side Array of index till Array[left] == Number  
##### 6) Traverse the right side Array of the index till Array[right] == Number
##### 7) right - left - 1 will give the frequency of that number in a Array
##### 8) Similarly DO the same for other two number
##### 9) If frequency of 0 > ( frequency of 1 and frequency of 2 ) => PRINT 'X'
##### 10) If frequency of 1 > ( frequency of 0 and frequency of 2 ) => PRINT 'Y'
##### 11) If frequency of 2 > ( frequency of 0 and frequency of 1 ) => PRINT 'Z'
##### 12) EXIT

## Example 
##### Let Array = { 0, 0, 1, 1, 1, 2, 2, 2, 2}
##### let NumberToBeSearch= 1;
##### index= BinarySearch(Array, NumberToBeSearch)  =>  index = 4
##### left = index -1   --->   left = 4-1  --->  left = 3
##### right = index + 1  --->  right = 4+1  --->  right =5
##### Traverse the left of array and check the condition Array[left]==1  --->  Condition broken at left = 1 
##### Traverse the right of the array and check the condition Array[right]==1 ---> condition breaks at right = 5
##### Frequency of 1 = right - left -1   ---->  freq = 5-1-1  --->   freq = 3 
##### Similarly ,   Frequency of 0 = 2;
#####               Frequency of 2 = 4;
##### Frequency of 2 > Frequency of 1 and 0
##### Hence PRINT 'Z'
