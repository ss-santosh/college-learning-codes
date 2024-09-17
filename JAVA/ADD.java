import java.io.*;
class ADD
{
 public double addition(double p,double q)
 {
  return(p+q);
 }
public static void main(String arg[])
 {
  ADD obj=new ADD();
  double R=obj.addition(3.5,4.6);
  System.out.println("value of R"+R);
 }
}
