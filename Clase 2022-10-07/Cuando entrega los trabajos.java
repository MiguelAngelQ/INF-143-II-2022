import java.util.Scanner;

public class Main{

	private static Scanner in;
	private static int N = 1010;
	private static int n;
	private static int a[] = new int[N];

	public static int f(int tiempo) {
		int trabajos = 0;
		for (int i = 0; i < n; i++) {
			trabajos += (tiempo / a[i]);
		}
		return trabajos;
	}

	public static void main(String[] args) {
		in = new Scanner(System.in);
		n = in.nextInt();
		for (int i = 0; i < n; i++) {
			a[i] = in.nextInt();
		}
		int q = in.nextInt();
		while (q-- > 0) {
			int t = in.nextInt();
			int low = 0, high = 100000;
			while (high - low > 1) {
				int mid = (high + low) / 2;
				if (f(mid) < t)
					low = mid;
				else
					high = mid;
			}
			System.out.println("Tiempo minimo para " + t + " trabajos es: " + high);
		}
	}
}