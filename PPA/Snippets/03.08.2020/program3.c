int main(){
	int max=5;
	int c=0;
	for(;c<max;c++);{
		printf("%d ",c);
	}
	printf("END\n");
	return 0;
}

/*
output:
	5 END
----------------------------------------------------------------------------
Exp:
	for(;c<max;c++);
	you can see after for loop there is semicolon
	so for(;c<max;c++)
	;
	{
		printf("%d",c);
	}
	in our case max value is 5 and c value is 0 so loop iterate untill the
	condition is true and execute null statement(;) all the time after 
	completion of for loop it goes to next part in which we are printing the 
	value of c after execution of for loop the value of c is 5 because at value 
	5 the for loop stop to execute and it print value 5 and then END
*/
