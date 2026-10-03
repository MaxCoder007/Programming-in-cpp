import java.util.*;

class Student {
    // Encapsulation
    private int id;
    private String name;
    private int age;
    private double marks;

    // Constructor
    public Student(int id, String name, int age, double marks) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.marks = marks;
    }

    // Getters
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getMarks() {
        return marks;
    }

    // Setter
    public void setMarks(double marks) {
        this.marks = marks;
    }

    // Method
    public void display() {
        System.out.println(
            "ID: " + id +
            " Name: " + name +
            " Age: " + age +
            " Marks: " + marks
        );
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        ArrayList<Student> students = new ArrayList<>();

        HashMap<Integer, Student> map = new HashMap<>();

        while (true) {

            System.out.println("\n===== MENU =====");
            System.out.println("1. Add Student");
            System.out.println("2. Display Students");
            System.out.println("3. Search Student");
            System.out.println("4. Update Marks");
            System.out.println("5. Exit");

            System.out.print("Enter Choice: ");

            int choice = sc.nextInt();

            switch (choice) {

                case 1:

                    System.out.print("Enter ID: ");
                    int id = sc.nextInt();

                    sc.nextLine();

                    System.out.print("Enter Name: ");
                    String name = sc.nextLine();

                    System.out.print("Enter Age: ");
                    int age = sc.nextInt();

                    System.out.print("Enter Marks: ");
                    double marks = sc.nextDouble();

                    Student s = new Student(id, name, age, marks);

                    students.add(s);

                    map.put(id, s);

                    System.out.println("Student Added.");

                    break;

                case 2:

                    if (students.isEmpty()) {
                        System.out.println("No Students.");
                    } else {

                        for (Student st : students) {
                            st.display();
                        }

                    }

                    break;

                case 3:

                    System.out.print("Enter ID: ");

                    int searchId = sc.nextInt();

                    if (map.containsKey(searchId)) {

                        map.get(searchId).display();

                    } else {

                        System.out.println("Student Not Found");

                    }

                    break;

                case 4:

                    System.out.print("Enter ID: ");

                    int updateId = sc.nextInt();

                    if (map.containsKey(updateId)) {

                        System.out.print("Enter New Marks: ");

                        double newMarks = sc.nextDouble();

                        map.get(updateId).setMarks(newMarks);

                        System.out.println("Updated Successfully.");

                    } else {

                        System.out.println("Student Not Found");

                    }

                    break;

                case 5:

                    System.out.println("Thank You");

                    return;

                default:

                    System.out.println("Invalid Choice");
            }
        }
    }
}