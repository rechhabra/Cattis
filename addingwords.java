import java.io.*;
import java.util.*;
import java.util.*;
import java.io.*;
public class Spice {
    private static ArrayList<String> vals = new ArrayList<String>();
    public static void main (String[] args) {
        vals.add("0:0");
        Scanner x = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        while (x.hasNextLine()) {
            String oper = x.nextLine();
            if (oper.equals("clear")){
                vals.clear();
                vals.add("0:0");
            }
            else if (oper.substring(0,3).equals("def"))
                def(oper);
            else
                calc(oper);
        }
    }
    public static void calc(String oper) {
        oper = oper.substring(5);
        String[] cmnds = oper.split(" ");
        if (cmnds.length<=2){
            for (int i = 0; i<vals.size(); i++){
                if (cmnds[0].equals(vals.get(i).substring(0, vals.get(i).indexOf(":")))){
                System.out.println(oper+" "+cmnds[0]);
                return;}
            }
            System.out.println(oper+" unknown");
            return;
        }
        int sum = 0;
        for (int i = 0; i<cmnds.length-2; i+=2){
            if (compute(cmnds[i],cmnds[i+1],cmnds[i+2])=="nignog"){
                System.out.println(oper+" unknown"); return;
            }
            if (i == 0)
                sum+=Integer.parseInt(compute(cmnds[i],cmnds[i+1],cmnds[i+2]));
            else
                sum+=Integer.parseInt(compute("0",cmnds[i+1],cmnds[i+2]));
        }
        String finder = null;
        for (int z = 0; z<vals.size(); z++){
            String i = vals.get(z);
            if (i.substring(i.indexOf(":")+1).equals(""+sum) && !i.equals("0:0")){
                System.out.println(oper+" "+i.substring(0,i.indexOf(":"))); return;}
        }
        System.out.println(oper+" unknown");
    }

    public static String compute(String item1, String oper, String item2){
        Integer val1=null;
        Integer val2=null;
        for (int z = 0; z<vals.size(); z++){
            String i = vals.get(z);
            if (i.substring(0,i.indexOf(":")).equals(item1)){
                val1 = new Integer(Integer.parseInt(i.substring(i.indexOf(":")+1)));
            }
            if (i.substring(0,i.indexOf(":")).equals(item2)){
                val2 = new Integer(Integer.parseInt(i.substring(i.indexOf(":")+1)));                
            }
        }
        if (val1==null || val2==null){
            return "nignog";}
        if (oper.equals("+"))
            return ""+(val1+val2);
        if (oper.equals("-")){
            return ""+(val1-val2);
        }
        return "nignog";
    }

    public static void def(String oper) {
        oper = oper.substring(4);
        String[] dict = oper.split(" ");
        String key = dict[0];
        String value = dict[1];
        for (int i = 0; i<vals.size(); i++){
            if (key.equals(vals.get(i).substring(0,vals.get(i).indexOf(":")))){
                vals.set(i,key+":"+value);
                return;
            }
        }
        vals.add(key+":"+value);
    }
}
