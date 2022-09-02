import java.util.Scanner;

public class ej2 {
	
	public static void buscar(int a[], int n, int x) {
		int low = -1, high = n - 1;//limite inferior - 1 y superior + 1
		while(high - low > 1) {
			int mid = (low + high) / 2;
			if(a[mid] >= x) {
				high = mid;
			}else {
				low = mid;
			}
		}
		//la respuesta esta en high
		if(a[high] == x) {
			System.out.println("X existe");
		}else {
			System.out.println("X no existe");
		}
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
		buscar(a, n, x);
	}

}