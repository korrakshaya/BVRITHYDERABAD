import java.util.Scanner;

public class greatest
{
	public static void main(String[] args){
		System.out.println("Enter the integers:");
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		int b = s.nextInt();
		int c = s.nextInt();
		if(a > b && a > c){
			System.out.println("The greatest number is : " + a);}
		else if(b > a && b > c){
			System.out.println("The greatest number is : " + b);}
		else{
			System.out.println("The greatest number is : " + c);}
	}
}
			
		