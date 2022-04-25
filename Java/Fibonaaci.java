//Fibonacci Series using Recursion
import java.util.Scanner;
class Fibonaaci
{
	static int fib(int n)
	{
	if (n <= 1)
	return n;
	return fib(n-1) + fib(n-2);
	}
	
	public static void main (String args[])
	{
	int n;
			Scanner s = new Scanner(System.in);
        System.out.println("Enter the number");
        n=s.nextInt();
	System.out.println(fib(n));
	}
}


