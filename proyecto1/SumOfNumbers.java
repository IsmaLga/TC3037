import java.util.Scanner;

public class SumOfNumbers {
	
	public void getValues(int n){
		 
		int p = 2;
		
		boolean resultFound = false;
		while(p < n && resultFound == false){
			int a =(2* n -(p-1)*p) / (2*p);
			int calculation = p * a + ((p)*(p-1)/2);
			if(calculation == n){
				System.out.println(a + " "+ p );
				resultFound = true;
			}else{
				p++;
			}
		}
	}
	public static void main(String[] args){
		System.out.println("Insert N");
		Scanner console = new Scanner(System.in);
		int n = console.nextInt();
		SumOfNumbers test = new SumOfNumbers();
		test.getValues(n);
	}
}