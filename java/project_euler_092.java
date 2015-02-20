public class project_euler_92
{
  public static int next(int nr) {
    int sum = 0;

    while (nr != 0) {
      int digit = nr % 10;
      sum += digit * digit;
      nr /= 10;
    }

    return sum;
  }
    
  public static void main(String[] args)
  {
    int result = 1;
    
    for(int i = 2; i <= 10000000; i++) {
      int current = i;
      while (current != 1 && current != 89) {
        current = next(current);
        if (current == 89)
          result++;
      }
    }
    
    System.out.println(result);
  }
}
