import XCTest

/*
Multiples of 3 or 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

Courtesy of projecteuler.net

*/

func solution(_ num: Int) -> Int {
  var sum: Int = 0
  var i: Int = 1
  while i < num{
     if (i % 3 == 0 || i % 5 == 0){
       sum += i
       }
     i += 1
  }
  return sum
}

class SolutionTest: XCTestCase {
    static var allTests = [
        ("Test Solution", testSolution),
    ]

    func testSolution() {
        XCTAssertEqual(solution(10), 23)
        XCTAssertEqual(solution(20), 78)
        XCTAssertEqual(solution(200), 9168)
    }
}

XCTMain([
    testCase(SolutionTest.allTests)
])
