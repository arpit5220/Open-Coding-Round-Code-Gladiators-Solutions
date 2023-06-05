import java.io.*;
import java.util.*;
public class CandidateCode {
   public static void main(String args[] ) throws Exception {

	
        Scanner sc=new Scanner(System.in);
        int animals=sc.nextInt();
        int cap=sc.nextInt();

        List<Integer> energy=new ArrayList<>();

        for(int i=0;i<animals;i++)
        {
           if(sc.hasNextInt())
           {
               energy.add(sc.nextInt());
           }
        }

        Collections.sort(energy);

        if(cap==animals)
        {
           System.out.print(energy.get(0));
        }
        else if(energy.get(animals-cap)==energy.get(animals-cap-1))
        {
           System.out.print("-1");
        }
        else{
           System.out.print(energy.get(animals-cap));
        } 

   }
}
