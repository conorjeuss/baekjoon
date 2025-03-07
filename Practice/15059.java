import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] avail_arr = new int[3];

        for (int i=0; i<3; i++)
        {
            avail_arr[i] = scanner.nextInt();
        }

        int res = 0;

        for (int i=0; i<3; i++)
        {
            int a;
            a = scanner.nextInt();

            if(avail_arr[i] - a >=0) {
                continue;
            }
            else {
                res += Math.abs(avail_arr[i] - a);
            }
        }

        scanner.close();
        System.out.println(res);

    }
}
