import java.util.Scanner;

class Mixer{
	Scanner in= new Scanner(System.in);
	int n,arr[];
	void accept()
	{
		System.out.println("Enter n");
		n=in.nextInt();
		arr= new int[n];
		for(int i=0;i<n;i++)
			arr[i]=in.nextInt();
	}
	void display()
	{	int i=0;
		System.out.println("Array is");
		for(;i<n;i++)
		System.out.print(arr[i]+" ");
	}

	Mixer mix(Mixer A)
	{
		int m=A.arr.length;
		int c[]=new int [100];
		int x,y,z;
		for(x=0,y=0,z=0;x<n && y<m;)
		{
			if(arr[x]<=A.arr[y])
				c[z++]=arr[x++];
			else
				c[z++]=A.arr[y++];
		}
		if(x<m)
		{
			while (x<n)
				c[z++]=arr[x++];
		}
		else
		{
			while(y<m)
				c[z++]=A.arr[y++];
		}
		A.arr=c;
		A.n=m+n;
		A.display();
		return A;
	}
}

class Prg3{

public static void main(String [] args)
{

	Mixer a= new Mixer ();
	a.accept();
	a.display();
	Mixer b= new Mixer();
	b.accept();
	b.display();
	b=b.mix(a);
}

}