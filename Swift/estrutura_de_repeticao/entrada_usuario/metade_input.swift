/*
Escrever um programa receba 5 números do usuário de imprima a metade de cada número 
*/

for _ in 1...5 {
   print("Digite um número:", terminator: "")
   let n = Float(readLine()!)!
   print(n/2)
}

