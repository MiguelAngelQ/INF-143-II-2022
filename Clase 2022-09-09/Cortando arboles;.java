import java.util.Scanner;
 
public class Main{
 
    private static Scanner in;
 
    public static void main(String[] args) {
        in = new Scanner(System.in);
        while (in.hasNext()) {
            int n, w, l;
            n = in.nextInt();
            w = in.nextInt();
            l = in.nextInt();
            int h[] = new int[n];
            int r[] = new int[n];
            for (int i = 0; i < n; i++) {
                h[i] = in.nextInt();
                r[i] = in.nextInt();
            }
            int cur = 0;// cuanta madera tengo
            int month = 0;// cuantos meses pasaron
            while (cur < w) {
                for (int i = 0; i < n; i++) {
                    if (h[i] >= l) {
                        cur += h[i];
                        h[i] = 0;
                    }
                    h[i] += r[i];
                }
                month += 1;
            }
            System.out.println(month - 1);
        }
 
    }
}