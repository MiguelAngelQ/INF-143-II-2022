import java.util.Scanner;

public class Ej1 {

	public static void buscar(int a[], int n, int x) {
		for(int i = 0; i < n; i++) { 			//n + 1
			if(a[i] == x) {						//n
				System.out.println("X existe");	//1
				return;							//1
			}
		}
		System.out.println("X no existe");		//1
		
		/*
		 t(n) = n + 1 + n + 1 + 1 + 1
		 t(n) = 2n + 4
		 t(n) E O(n)
		 * */
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		//Dado un vector verificar si existe x
		int n = in.nextInt();		//1
		int a[] = new int[n];		//1 ??????????
		for(int i = 0; i < n; i++)	//n + 1
			a[i] = in.nextInt();	//n
		//x
		int x = in.nextInt();		//1
		buscar(a, n, x);			//2n + 4
		
		/*
		 t(n) = 1 + 1 + n + 1 + n + 1 + 2n + 4
		 t(n) = 4n + 8
		 t(n) E O(n) 
		 * */
	}
}