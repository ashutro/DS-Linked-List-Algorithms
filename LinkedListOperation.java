import java.util.*;
public class LinkedListOperation {
    public static void main(String[] args) {
       LinkedList <String> List = new LinkedList<String>();

        //adding element in the list:
       List.add(0,"Ashutosh");
       List.add(1,"Kumar");
       List.add(2,"C++");

       //printing element of the list with help of get method:
       for(int i = 0; i < List.size();i++){
           System.out.print(List.get(i)+" ");
       }

       //seting new element in the list at particular index:
       List.set(2, "Java");

       System.out.println();
       for(int i = 0; i < List.size();i++){
        System.out.print(List.get(i)+" ");
    }
    // removing the element from list : it remove first occurrence of element:
    List.remove("Kumar");
    System.out.println();
    for(int i = 0; i < List.size();i++){
        System.out.print(List.get(i)+" ");
    }

    }
}
