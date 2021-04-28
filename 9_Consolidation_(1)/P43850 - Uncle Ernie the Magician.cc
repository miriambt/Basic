/* Uncle Ernie the Magician
Uncle Ernie is a brilliant magician. The other day he thrilled the theater by guessing a number that someone in the audience had thought. The dialog that took place during the show was more or less like this:

— What’s your name, lad?
— Uhhh, I’m Bill.
— Ok, Bill, we will perform a telepathic experiment. Please write down a number on this sheet. Any number will do.
— Done.
— Perfect, now please put the sheet with your number inside this envelope and give it to that young lady in the first row. Isn’t she gorgeous? [To the beautiful lady] Please come backstage after the show, I’ll show you a nice trick... Anyway, please hold the envelope close to your chest. [To Bill] Excellent! Now, please concentrate on your number, fix your mind on that number.
— Mmmh ...
— C’mon chap! Please try it harder! I can’t get the waves from your brain ...
— Mmmhhhh ...
— I don’t get it ... [To the audience] I think someone here is introducing interferences. Someone is causing bad vibrations and making trouble. Is President Bush between us tonight? That was a joke! [Laughs] [To Bill] Let’s see ... multiply your number by five.
— [After a while] That’s it.
— You’re a genius! Add six to the product.
— Yes.
— Multiply the sum by four.
— Done.
— Now, add nine to the product. Jez, be careful, don’t mess the numbers!
— Yep.
— Quick: multiply the sum by five!
— All right.
— Please tell us the result in a loud voice.
— [Loud] The result is 73365.
— Ok ... Let’s see ... I think I’ve got it ... Mmmhh ... You wrote number 732? Did you write number 732? Is 732 the number you wrote? Is it?
— YES!!! [Applause from the audience]
Indeed, 732 was the number written in the envelope, as the good-looking girl confirmed.

Can you emulate Uncle Ernie and write a magical program that guesses the number that the computer thinks? The computer will think a number, will perform the same calculations on this number as Bill and will tell you the result. You have to “guess” the original number.

Input

Input consists of several integer numbers: the results obtained by the computer. All them will be between 0 and 231−1.

Output

For every given integer, print the original number thought by the computer. You have the guarantee that the computer will not try to cheat you.
*/

#include <iostream>
using namespace std;

int main () {
	int y;
	while (cin >> y) {
		cout << (y-165)/100 << endl;
	}
}

/* Example:
Input:
73365
465
73365 465

Output:
732
3
732
3
*/