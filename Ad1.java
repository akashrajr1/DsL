// ISBN Number 
import java.util.*;
import java.lang.Object;

class isbn
{	Scanner in=new Scanner(System.in);
	String n;
	void inputISBN()
	{
		System.out.println("Enter ISBN number");
		n=in.next();
	}
	void checkISBN()
	{
		int n= this.n.length();
		if(n!=10)
			{System.out.println("ISBN should be a 10 digit number");
			 System.exit(0);}
		int div=0;
		for(int i=0;i<10;i++)
			div+=(int)this.n.charAt(i)*(i+1);
		if(div%11==0)
			System.out.println("Legal ISBN");
		else
			System.out.println("Illegal ISBN");
	}

}

class Ad1
{
	public static void main(String args[])
	{
		isbn a= new isbn();
		a.inputISBN();
		a.checkISBN();
	}
}
