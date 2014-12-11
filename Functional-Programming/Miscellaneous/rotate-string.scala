object Solution {
  def rotate(s: String): List[String] = {
    def loop(s: String, acc: List[String]): List[String] = {
      val rotated = s.tail :+ s.head
      if (s.length != acc.length) loop(rotated, acc :+ rotated)
      else acc
    }
    loop(s, Nil)
  }
  def main(args: Array[String]) {
    val n = readInt()
    (0 until n).foreach(_ => println(rotate(readLine().trim).mkString(" ")))
  }
}