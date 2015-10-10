public class project_euler_002 {
  public static void main(String [] args) {
    int x = y = 1;
    int sum = aux = 0;

    while (i < 4000000) {
      if (x % 2 == 0) {
        sum += x;
      }
      aux = x;
      x += y;
      y = aux;
    }

    System.out.println(sum);
  }
}
