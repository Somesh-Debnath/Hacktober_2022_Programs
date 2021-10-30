import java.util.Scanner;

public class PalindromeTestWrapper {
    final String isMsg = " IS a palindrome";
    final String isNotMsg = " is NOT a palindrome";

    public PalindromeTestWrapper() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter word :");
        String word = input.nextLine();
        boolean result = isPalindrome(word);
        if (result == true) {
            System.out.println("The string is palindrome.");
        } else {
            System.out.println("The string is not palindrome.");
        }
    }

    public static void main(String[] args) {
        new PalindromeTestWrapper();
    }

    public boolean isPalindrome(String s) {
        Stack stack;
        char[] charArray = s.toCharArray();
        int length = charArray.length;
        stack = new Stack(s);
        // Finding the mid
        int i, mid = length / 2;

        for (i = 0; i < mid; i++) {
            stack.push(charArray[i]);
        }
        if (length % 2 != 0) {
            i++;
        }
        while (i < length) {
            char ele = (char) stack.pop();
            if (ele != charArray[i])
                return false;
            i++;
        }

        return true;
    }
}

class Stack {
    private final long[] stack;
    private final int maxSize;
    private int top;

    public Stack(String word) {
        maxSize = word.length();
        stack = new long[maxSize];
        top = -1;
    }

    public void push(long j) {
        stack[++top] = j;
    }

    public long pop() {
        return stack[top--];
    }

    public long peek() {
        return stack[top];
    }

    public boolean isEmpty() {
        return (top == -1);
    }

    public boolean isFull() {
        return (top == maxSize - 1);
    }
}
