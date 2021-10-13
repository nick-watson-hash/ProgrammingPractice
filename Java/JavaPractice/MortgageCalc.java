package JavaPractice;

import java.util.Scanner;

public class MortgageCalc {

    public static void main(String[] args) {
        System.out.println("This project shows how much your mortgage will be based on some items.");
        Scanner scanner = new Scanner(System.in);
        byte mortgage = scanner.nextByte();
        System.out.println("This is " + mortgage);
    }
}
