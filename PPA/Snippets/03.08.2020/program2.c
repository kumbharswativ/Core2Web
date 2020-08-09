int main(){
	int max=5;
	int i=0;
	for(;;){
		i++;
		if(i>max)
			break;
		printf("i=%d\n",i);
	}
	return 0;
}

/*
Output:
	i=1
	i=2
	i=3
	i=4
	i=5
	
------------------------------------------------------------------
Exp:
	for(;;) -> it means for loop iterate infinite time's
	in our program max value is 5 and i value is 0 so in first
	iteration i becomes 1 then it check the condition i>max(1>5)
	which is true so the if body is not execute then it go to 
	the print statement and print the value of i 
	
	note: print is not part of if statement reason is if has 
	not curly braces or if not consider print in its body it
	consider only break statement
	
	then in second iteration i becomes two so the if condition
	is true and it not execute if body and print i value
	
	the loop is iterate till the if condition is false in our 
	case when i becomes 6 then if execute and it break the
	loop and jump outside the for loop
	
	note: print statement is not executed because after break
	statement body is not executed.

*/
