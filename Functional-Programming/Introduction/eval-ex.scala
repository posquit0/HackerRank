object Solution {
  def f(x: Float): Float = {
    ((9 to 1 by -1) foldLeft 1.0f) { (a, b) => 1.0f + a * (x / b) }
  }
  def main(args: Array[String]) {
    var n = readInt
    (1 to n) foreach(x=> println(f(readFloat())))
  }
}
