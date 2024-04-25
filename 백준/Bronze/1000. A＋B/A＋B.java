import java.io.*;
import java.util.*;
import java.lang.*;

class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int a = br.read()-'0';
        br.read();
        int b = br.read()-'0';
        System.out.println(a+b);
    }
}