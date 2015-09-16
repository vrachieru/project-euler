object project_euler_001 {
  def main(args: Array[String]) {
    val sum = (1 until 1000).filter(i => i % 3 == 0 || i % 5 == 0).sum
    println(sum)
  }
}