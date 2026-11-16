import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input principal (x), time (y), and rate of interest (z)
        System.out.print("Enter principal amount (x): ");
        double x = scanner.nextDouble();

        System.out.print("Enter time in years (y): ");
        double y = scanner.nextDouble();

        System.out.print("Enter rate of interest (z): ");
        double z = scanner.nextDouble();

        // Calculate simple interest
        double simpleInterest = (x * y * z) / 100.0;

        // Display the result
        System.out.printf("Simple Interest = %.2f\n", simpleInterest);

        scanner.close();
    }
}
