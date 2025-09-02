import java.io.*;

public class printline{
    public static void main(String[] args) throws IOException {
        // Check if a file name was provided
        if (args.length == 0) {
            System.out.println("Usage: java PrintLine <file-name>");
            return; // Exit the program if no argument is provided
        }

        File file = new File(args[1]); // Get the file from command line arguments
        int wordCount = 0, lineCount = 0;

        BufferedReader br = new BufferedReader(new FileReader(file)); // Create a BufferedReader
        String line;
        while ((line = br.readLine()) != null) { // Read lines until the end of the file
            lineCount++; // Increment line count
            wordCount += line.split("\\s+").length; // Count words in the line
        }

        br.close(); // Close the BufferedReader
        System.out.println("Lines: " + lineCount + ", Words: " + wordCount); // Output the counts
    }
}
