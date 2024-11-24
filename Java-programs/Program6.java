import java.io.*;
import java.util.Scanner;

public class Program6 {
    public static void main(String[] args){
        String filepattern;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the pattern:");
        filepattern = sc.nextLine();
        File n = new File(".");
        if(n.exists() && n.isDirectory()){
            String[] files = n.list();
            if(files !=null){
                System.out.println("Files with pattern "+filepattern);
                for(int i=0;i<files.length;i++){
                    if(files[i].endsWith(filepattern)){
                        System.out.println(files[i]);
                    }
                }
            }
            else{
                System.out.println("No matching files");
            }
        }
        else{
            System.out.println("No directory");
        }

    }
}
