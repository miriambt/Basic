'''
Més zeros o uns?
Donat un natural n, la seva representació en base 2 té més zeros o uns?

Escriviu una funció
     zeros_o_uns(n)
que,donat un enter n, retorni 0 si n en binari té més zeros que uns, 1 si té més uns que zeros, i 2 si hi ha empat.

Precondició

Es compleix 1 ≤ n.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.

Observació

No podeu usar vectors o similars.
'''

from jutge import read


def zeros_o_uns(n):
    compt_0 = 0
    compt_1 = 0
    if (n == 0):
        return 0
    else:
        while (n > 0):
            if (n % 2 == 0):
                compt_0 = compt_0 + 1
            if (n % 2 == 1):
                compt_1 = compt_1 + 1
            n //= 2
        if (compt_0 > compt_1):
            return 0
        elif (compt_0 < compt_1):
            return 1
        else:
            return 2


def main():
    n = read(int)
    while n is not None:
        print(zeros_o_uns(n))
        n = read(int)


main()


'''
Input/output:
zeros_o_uns(1) → 1
zeros_o_uns(2) → 2
zeros_o_uns(4) → 0
zeros_o_uns(1023) → 1
zeros_o_uns(1024) → 0
zeros_o_uns(724368472687652376432784263874236431) → 0
'''