''' Quadrats curiosos
Feu un programa que, donat un natural n, escrigui un quadrat n × n segons el patró que es pot veure als exemples.

Entrada

L’entrada consisteix en diversos casos, cadascun amb un n ≥ 1.

Sortida

Per a cada n, escriviu un quadrat n × n segons el patró dels exemples. Separeu dos quadrats consecutius amb una línia buida.

Observació: no podeu usar vectors o similars.
'''

from jutge import read

def escriu_quadrat(n):
    for i in range(n - 1, -1, -1):
        for j in range(n - 1, -1, -1):
            print(min(i, j) % 10, end='')
        print()

def main():
    n, primer = read(int), True
    while n is not None:
        if not primer:
            print()
        escriu_quadrat(n)
        n, primer = read(int), False


main()


'''
Example:
Input:
1
2
4
23
Output:
0

10
00

3210
2210
1110
0000

21098765432109876543210
11098765432109876543210
00098765432109876543210
99998765432109876543210
88888765432109876543210
77777765432109876543210
66666665432109876543210
55555555432109876543210
44444444432109876543210
33333333332109876543210
22222222222109876543210
11111111111109876543210
00000000000009876543210
99999999999999876543210
88888888888888876543210
77777777777777776543210
66666666666666666543210
55555555555555555543210
44444444444444444443210
33333333333333333333210
22222222222222222222210
11111111111111111111110
00000000000000000000000
'''