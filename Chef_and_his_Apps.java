/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Codechef
{
	public static void main (String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t!=0)
		{
		    int s,x,y,z;
		    s=in.nextInt();
		    x=in.nextInt();
		    y=in.nextInt();
		    z=in.nextInt();
		    
            if((x+y+z)<=s)
            {
                System.out.println("0");
            }
            else if(((x+z)<=s) || ((y+z)<=s))
            {
                System.out.println("1");
            }
            else
            {
                System.out.println("2");
            }
            t--;
		}
	}
}
