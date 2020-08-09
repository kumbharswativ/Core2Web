
const int MAX=10;
int main()
{
	int i=1;
	for(;i<MAX;i=i/i)
	{
		printf("%d\n",i);
	}
	return 0;
}

/*
Output:
	Infinite
------------------------------------------------------------------------
Exp:
	const int MAX = 10 ;
	this statement indicate that MAX is global variable and which is 
	constant.
	constant means you can never change the value of MAX and you have
	access only for reading
	in for loop you can see that the initialization part of for loop 
	is not given but it work. 
	lets consider the loop in which i value is starting from 1 then 
	it check the condition i<MAX
	(1<10) which is true then it go into body execute whatever in
	then go to the increment part but at increment part you  can see
	the i=i/i(i=1/1) then i store 1 value in it
	then it check the condition i<MAX (1<10) which is true
	so then i always store one and loop never be stop so the ans is
	INFINITE and condition never be false
*/
