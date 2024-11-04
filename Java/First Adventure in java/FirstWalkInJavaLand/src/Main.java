import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        System.out.println("second");
        int b = scn.nextInt();
        System.out.println(b);
        System.out.println("third");
        String v = scn.nextLine();
        System.out.println(v);

        scn.close();
    }
}