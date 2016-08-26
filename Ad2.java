import java.lang.Math;

class Die{
	int sideUp;
	int getSideUp()
	{
		return sideUp;
	}
	void roll()
	{
		sideUp = (int) (Math.random()*6+1);
	}
}

class DieDemo 
{	void meth()
	{
		Die d1= new Die ();
		Die d2 =new Die ();
		
		d1.roll();
		d2.roll();
		System.out.println("Sum of two sides is "+(d1.getSideUp()+d2.getSideUp()));
	}	

}
class Ad2{
	public static void main(String [] args)
	{
		DieDemo d= new DieDemo();

		d.meth();
	}
}
