import java.util.Scanner;

class Swapper {
int x,y;
Scanner in = new Scanner (System.in);
void intVar()
{
	System.out.println("Enter x and y");
	x=in.nextInt();
	y=in.nextInt();
}

int getX()
{
	return x;
}
int getY()
{
	return y;
}
void swap()
{
	x=x+y;
	y=x-y;
	x=x-y;
}
}

class SwapperDemo
{
	void test()
	{
		Swapper a= new Swapper();
		a.intVar();
		a.swap();
		System.out.println(a.getX()+" "+a.getY());
		
	}
}

class Ad3{
	public static void main(String [] args)
	{
		SwapperDemo a = new SwapperDemo ();
		a.test();
	}
}