object project_euler_002 {
  def nextFib(x: Int, y: Int): Stream[Int] = {
    x #:: nextFib(y, x+y)
  }

  def main(args: Array[String]) {
  	val fib = nextFib(1, 1)
    val sum = fib.takeWhile(_ <= 4000000).filter(_ % 2 == 0).sum

    println(sum)
  }
}