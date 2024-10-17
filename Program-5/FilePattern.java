import java.io.*;
 import java.util.*;
public class FilePattern {
    public static void main(String[] args) {
        System.out.println("Enter the pattern (.java , .txt , .c):");
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        File dire = new File(".");
        if (dire.exists() && dire.isDirectory()){
            String[] files = dire.list();
            if(files !=null){
                System.out.println("Files with the pattern "+pattern+" is :");
                for(int i = 0; i<files.length;i++){
                    if (files[i].endsWith(pattern)){
                        System.out.println(files[i]);
                    }
                }
            }
            else{
                System.out.println("Directory is empty");
            }
        }
        else{
            System.out.println("its not a directory");
        }
    }
}