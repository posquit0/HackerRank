object Solution {
  def fib(n: Int): Int = {
    def loop(i: Int, a: Int, b: Int): Int = {
      if (i < n) loop(i + 1, (a + b) % (math.pow(10, 8).toInt + 7), a)
      else a
    }
    if (n < 2) n
    else loop(1, 1, 0)
  }
  def main(args: Array[String]) {
    val n = readInt
    for (_ <- 0 until n) println(fib(readInt))
  }
}