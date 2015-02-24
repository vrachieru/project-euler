public class project_euler_206
{
  public static void main(String[] args)
  {
    long result = (long) Math.sqrt(1020304050607080900L);

    while(true) {
        String square = Long.toString(result * result);

        if (
            square.charAt(0)  == '1' &&
            square.charAt(2)  == '2' &&
            square.charAt(4)  == '3' &&
            square.charAt(6)  == '4' &&
            square.charAt(8)  == '5' &&
            square.charAt(10) == '6' &&
            square.charAt(12) == '7' &&
            square.charAt(14) == '8' &&
            square.charAt(16) == '9' &&
            square.charAt(18) == '0'
        ) {
            break;
        }

        // Since result^2 ends with 0, result is divisable by 10
        result += 10;
    }

    System.out.println(result);
  }
}