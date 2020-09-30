
import java.util.Scanner;

class student {
    int rollno;
    String name;
    int total_marks;
    String grade;

    student(int R, String S, int marks) {
        rollno = R;
        name = S;
        total_marks = marks;
    }

    void setData(int R, String S, int marks) {
        rollno = R;
        name = S;
        total_marks = marks;
    }

    void sort(student[] a) {
        for (int i = 0; i < a.length - 1; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[i].rollno > a[j].rollno) {
                    student t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }

    void grading(student[] a) {
        for (student i : a) {
            if (i.total_marks >= 90)
                i.grade = "A+";
            else if (i.total_marks >= 80)
                i.grade = "A";
            else if (i.total_marks >= 70)
                i.grade = "B+";
            else if (i.total_marks >= 60)
                i.grade = "B";
            else
                i.grade = "F";
        }
    }

    void ShowData(student[] a) {
        for (student i : a)
            System.out.println("Rollno:" + i.rollno + "\n" + "Name:" + i.name + "\n" + "Total marks" + i.total_marks
                    + "\n" + "Maximum Marks:100" + "\n" + "Grade:" + i.grade);
    }
}

public class q3 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        student[] a = new student[3];
        System.out.println("Enter the details");
        for (int i = 0; i < 3; i++) {
            System.out.println("Enter the roll no:");
            int rollno = scan.nextInt();
            System.out.println("Enter the name:");
            String name = scan.next();
            System.out.println("Enter the total marks(max:100):");
            int marks = scan.nextInt();
            a[i] = new student(rollno, name, marks);
        }
        a[0].sort(a);
        a[0].grading(a);
        a[0].ShowData(a);
    }
}