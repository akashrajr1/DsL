import java.util.Scanner;

class Stack {
	Scanner in = new Scanner(System.in);
	int tos,a[];
	Stack()
	{
		tos=-1;
		System.out.println("Enter number of elements");
		int n=in.nextInt();
		a=new int[n];

	}
	void push()
	{
		if(tos+1==a.length)
			System.out.println("Stack Overflow");
		else
		{
			System.out.println("Enter element "+(tos+2));
			a[++tos]=in.nextInt();
		}
	}
	void pop()
	{
		if(tos==-1)
			System.out.println("Stack Underflow");
		else
		
			System.out.println("Element "+(tos+1)+"\n"+a[tos--]);
		
	}
	void display()
	{
		for(int i=0;i<a.length;i++)
			System.out.print(a[i]+" ");
	}
}

class Prg4{
	public static void main(String [] args) 
	{
		Stack A=new Stack();
		
		Scanner in = new Scanner(System.in);
		int n=1;
		while(n!=0)
		{System.out.println("Enter\n1. Push\n2. Pop\n3. Display\n0. Exit");
		 n=in.nextInt();
			switch(n)
			{	
				case 1: A.push();
						break;
				case 2: A.pop();
						break;
				case 3: A.display();
						break;

			}
		}
	}
}