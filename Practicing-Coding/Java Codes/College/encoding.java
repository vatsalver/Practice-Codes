import java.util.*;

public class encoding {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string of 0s and 1s (even length):");
        String input = scanner.nextLine();

        if (input.length() % 2 != 0) {
            System.out.println("Error: Input length must be even.");
            return;
        }

        if (!input.matches("[01]+")) {
            System.out.println("Error: Input must only contain 0s and 1s.");
            return;
        }

        StringBuilder output = new StringBuilder();

        for (int i = 0; i < input.length(); i += 2) {
            String pair = input.substring(i, i + 2);
            switch (pair) {
                case "00":
                    output.append("A");
                    break;
                case "01":
                    output.append("T");
                    break;
                case "10":
                    output.append("G");
                    break;
                case "11":
                    output.append("C");
                    break;
            }
        }

        System.out.println("Encoded string: " + output.toString());

    }
}
