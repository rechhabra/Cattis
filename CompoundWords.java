import java.io.BufferedInputStream;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.TreeSet;
public class Main{
  public static void main(String args[]){
      Scanner kb = new Scanner(new BufferedInputStream(System.in));
  	ArrayList<String> pos = new ArrayList<String>();
  	while (kb.hasNext())
  		pos.add(kb.next());
  	TreeSet<String> noDup = new TreeSet<String>();
  	for (String a : pos){
  		for (String b: pos){
  		  if (a!=b)
  			noDup.add(a+b);
  		}
  	}
  	for (String c : noDup)
  		System.out.println(c);
  }
}
