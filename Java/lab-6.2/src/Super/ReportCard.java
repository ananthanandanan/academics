
import java.util.Scanner;

abstract class Marks{
	abstract float getPercentage();
}

class A extends Marks{
	float s1,s2,s3;
	A(float m1,float m2,float m3){
		s1=m1;
		s2=m2;
		s3=m3;
	}
	public float getPercentage() {
		return ((s1+s2+s3)/3);
	}
}

class B extends Marks{
	float s1,s2,s3,s4;
	B(float m1,float m2,float m3,float m4){
		s1=m1;
		s2=m2;
		s3=m3;
		s4=m4;
	}
	public float getPercentage() {
		return ((s1+s2+s3+s4)/4);
	}
}

public class ReportCard{
	  public static void main(String[] args){
		  Scanner in= new Scanner(System.in);
		  float m1,m2,m3,m4;
		  System.out.println("Enter the marks of student-1 in 3 subjects: ");
		  m1=in.nextInt();
		  m2=in.nextInt();
		  m3=in.nextInt();
		  A std1 = new A(m1,m2,m3);
		  System.out.println("The percentage obtained by student-1: "+ std1.getPercentage());
		  System.out.println("Enter the marks of student-2 in 4 subjects: ");
		  m1=in.nextInt();
		  m2=in.nextInt();
		  m3=in.nextInt();
		  m4=in.nextInt();
		  B std2 = new B(m1,m2,m3,m4);
		  System.out.println("The percentage obtained by student-2: "+ std2.getPercentage());
	
	  }
	}									
