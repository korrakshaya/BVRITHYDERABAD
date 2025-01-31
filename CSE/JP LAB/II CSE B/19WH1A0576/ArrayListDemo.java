import java.util.*;
class ArrayListDemo
{
	public static void main(String args[])
	{
		ArrayList a = new ArrayList();
		a.add(10);
		a.add(20);
		a.add(30);
		a.add(40);
		a.add(50);
		System.out.println("Elements in ArrayList: " + a);
		Iterator itr = a.iterator();
		System.out.println("Elements in ArrayList using Iterator : ");
		while(itr.hasNext())
		{
			Integer i = (Integer)itr.next();
			System.out.println(i);
		}
		System.out.println("Elements in ArrayList using for each loop : ");
		a.forEach((n) -> System.out.println(n));
	}
}