Import java.util.Scanner; 
class IntegerDiv
{
public static void main(String arias()) 
int x,y,z;
 Scanner in = new Scanner(System.in); 
System.out.print("Enter numbers: "); 
x = in.nextInt();
y = in.nextInt();
 try 
{
z = y / x;     //statementl 
System.out.println("Division: "+z); 
 System.out.println("Try end..."); 
} 
catch(ArithmeticException e) 
{  
  System.out.println("Division by zero error."); 
  }  
 catch(IOException e)   {    
System.out.println("your are trying to divide number greater than y which throw exception.");   }  
 catch(NumberFormatException  e)   {    
System.out.println("Invalid number.");   }  

 System.out.println("Program end..."); }
//end of main() 
}//end of class