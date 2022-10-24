package javaapplication1;

import java.util.Scanner;

public class mergeArray {
     public static void main(String ar[]){
         int arr1[]=new int[20];
         int arr2[]=new int[20];
         int arr3[]=new int[arr1.length+arr2.length];
         int i,n1,n2;
         Scanner s=new Scanner(System.in);
         System.out.println("enter the size of first array");
         n1=s.nextInt();
         System.out.println("enter the elements of first array");
         for(i=0;i<n1;i++){
             arr1[i]=s.nextInt();
         }
         System.out.println("enter the size of second array");
         n2=s.nextInt();
         System.out.println("enter the elements of second array");
         for(i=0;i<n2;i++){
             arr2[i]=s.nextInt();
         }
         for(i=0;i<n1;i++)
             arr3[i]=arr1[i];
         
          for(i=0;i<n2;i++)
             arr3[n1+i]=arr2[i];
          
          System.out.println("array after merging:-");
         for(i=0;i<n1+n2;i++){
             System.out.println(arr3[i]);
         }
     }    
}
