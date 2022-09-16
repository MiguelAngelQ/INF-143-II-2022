import java.util.Scanner;

public class Main {

	private static Scanner in;
	public static int N = 110;// solo 1 necsitamos
	public static int n;// tamaño del conjunto
	public static int a[] = new int[N];
	public static boolean t[] = new boolean[N];// true -> tomar, false -> no tomar

	public static void subset(int i) {// i representa a la posicion
		if (i == n) {// caso base
			for (int j = 0; j < n; j++) {
				if (t[j] == true) {// tomar
					System.out.print(a[j] + " ");
				}
			}
			System.out.println();
			return;
		}
		t[i] = true;// tomar
		subset(i + 1);
		t[i] = false;// no tomar
		subset(i + 1);
	}

	public static void main(String[] args) {
		in = new Scanner(System.in);
		n = in.nextInt();
		for(int i = 0; i < n; i++) {
			a[i] = in.nextInt();
		}
		subset(0);
	}
}