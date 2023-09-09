import java.util.Arrays;
import java.util.Scanner;

public class Calculation {
    // Function to find the minimum value in an array
    public static int findMin(int[] arrr) {
        int min = arrr[0];
        for (int i = 1; i < arrr.length; i++) {
            if (arrr[i] < min) {
                min = arrr[i];
            }
        }
        return min;
    }

    // Function to find the maximum value in an array
    public static int findMax(int[] arrr) {
        int max = arrr[0];
        for (int i = 1; i < arrr.length; i++) {
            if (arrr[i] > max) {
                max = arrr[i];
            }
        }
        return max;
    }

    // Function to sort an array using Arrays.sort()
    public static int[] sortArray(int[] arr) {
        Arrays.sort(arr);
        return arr;
    }

 

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        System.out.println("Min:" + findMin(arr));

    
        // Sort the array
        arr = sortArray(arr);

        
        scanner.close();
    }
}
