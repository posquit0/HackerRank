object Solution {
  def isFullOfColors(seq: String): Boolean = {
    def loop(seq: List[Char], rg: Int, yb: Int): Boolean = {
      seq match {
        case Nil => (rg == 0 && yb == 0)
        case _ if (rg.abs > 1 || yb.abs > 1) => false
        case h :: t => {
          h match {
            case 'R' => loop(t, rg + 1, yb)
            case 'G' => loop(t, rg - 1, yb)
            case 'Y' => loop(t, rg, yb + 1)
            case 'B' => loop(t, rg, yb - 1)
          }
        }
      }
    }
    loop(seq.toList, 0, 0)
  }
  def main(args: Array[String]) {
    val n = readInt()
    (0 until n).foreach(_ => println(if (isFullOfColors(readLine().trim)) "True" else "False"))
  }
}