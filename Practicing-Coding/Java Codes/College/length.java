import java.util.Scanner;

public class length {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = scanner.nextLine();
        System.out.println("Enter an index:");
        int index = scanner.nextInt();

        if (index < 0 || index >= input.length()) {
            System.out.println("Error: Index out of bounds.");
            return;
        }

        char character = input.charAt(index);
        int length = input.length();

        System.out.println("Character at index " + index + ": " + character);
        System.out.println("Length of the string: " + length);
    }
}
