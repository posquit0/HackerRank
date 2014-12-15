object Solution {
  def compress(s: String): String = {
    def loop(l: List[(Char, Int)], acc: List[(Char, Int)] = Nil): List[(Char, Int)] = {
      val (h@(ch, n)) :: t = l
      t match {
        case Nil => h :: acc
        case (`ch`, n2) :: tail => loop((ch, n + n2) :: t.tail, acc)
        case (ch2, n2) :: tail => loop(t, h :: acc)
      }
    }
    loop(s.toList.map((_, 1)).reverse).map({ case (ch, n) => if (n > 1) s"$ch$n" else s"$ch" }).mkString("")
  }
  def main(args: Array[String]) {
    println(compress(readLine().trim))
  }
}