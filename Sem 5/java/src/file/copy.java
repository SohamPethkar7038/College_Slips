import java.io.*;

public class copy {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter source file: ");
        String source = reader.readLine();
        System.out.print("Enter destination file: ");
        String destination = reader.readLine();

        BufferedReader br = new BufferedReader(new FileReader(source)); // Read from source file
        PrintWriter pw = new PrintWriter(new FileWriter(destination)); // Write to destination file

        String line;
        while ((line = br.readLine()) != null) { // Read lines from source
            pw.println(line); // Write lines to destination
        }

        pw.close(); // Close the PrintWriter
        br.close(); // Close the BufferedReader
        System.out.println("File copied successfully.");
    }
}
