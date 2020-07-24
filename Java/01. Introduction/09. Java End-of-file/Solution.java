// Java End-of-file 
// Problem Link: https://www.hackerrank.com/challenges/java-end-of-file/problem

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i = 1;
        while (in.hasNext()) {
            String str = in.nextLine();
            System.out.printf("%d %s\n", i++, str);
        }
    }
}
