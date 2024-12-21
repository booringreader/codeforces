fun main() {
    val n = readLine()?.toIntOrNull()
    if (n == null) {
        println("Error: Invalid input for n.")
        return
    }

    repeat(n){
        val secondLine = readLine()
        if (secondLine.isNullOrEmpty()) {
            println("Error: Missing second input line.")
            return
        }

        val parts = secondLine.split(" ")
        if (parts.size != 2) {
            println("Error: Second line must contain exactly two space-separated integers.")
            return
        }

        val x = parts[0].toIntOrNull()
        val y = parts[1].toIntOrNull()
        if (x == null || y == null) {
            println("Error: Invalid input for x or y.")
            return
        }

        var count = 0
        var tempX = x

        // println("X: $x")
        // println("Y: $y")


        do{

            if (y < 10) {
                if (x == 0) {
                    count++
                    tempX++
                }
                // println("tempX: $tempX")
                if (y % tempX == 0) {
                    count += y / tempX
                } else {
                    count += (y / tempX) + (y % tempX)
                }
            } else if (y > 10) {
                var quotient: Int
                var p = 0
                var divisor: Int

                var dividend = y
                // println("divident: $dividend")
                do {
                    divisor = tempX * Math.pow(10.0, p.toDouble()).toInt()
                    // println("divisor$p: $divisor")
                    quotient = dividend / divisor
                    // println("quotient$p: $quotient")
                    if (quotient >= 1) {
                        count = quotient
                    }
                    p++
                } while (quotient >= 1)

                val remaining = dividend - (count * (divisor / 10))

                if (remaining % tempX == 0) {
                    count += remaining / tempX
                } else {
                    count += (remaining / tempX) + (remaining % tempX)
                }
                // println("countPREV: $count")
                // println("remaining: $remaining")
            }
        }while(y/x >1)
        println("$count")
    }
}

