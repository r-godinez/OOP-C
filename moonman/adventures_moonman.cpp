//  adventures_of_moonman

//  Created by Ricardo Godinez on 12/10/18.

#include <iostream>
#include <iomanip>
using namespace std;

void introduction(string);
void scene2();
void scene3();
void scene4();
void scene5();
void scene6();
void scene7();

void ending1();
void ending2();
void ending3();
void ending4();

int main()
{
    string name;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << endl;

    introduction(name);

    cout << "The end...." << endl;

    return 0;
}
void introduction(string name)
{
    int choice1;

    cout << "You are major " << name << " and have been sent out on an excavation mission to the planet Mars." << endl
         << "There have been mysterious indications to form a conclusion of the presence of life being on Mars," << endl
         << "so NASA has sent you to check it out. On the trip, you see a floating being just before" << endl
         << "passing the Moon." << endl
         << "Do you..." << endl
         << endl
         << "1 - go to the mysertious being" << endl
         << "2 - ignore it" << endl
         << "3 - report the founding back to ground control" << endl;
    cin >> choice1;
    cout << endl;

    if (choice1 == 1)
    {
        scene2();
    }
    else if (choice1 == 2)
    {
        ending1();
    }
    else if (choice1 == 3)
    {
        scene3();
    }
    else
        cout << "Something went wrong with the program..." << endl;
}
void scene2()
{
    int choice2;

    cout << "You are afraid but tempted by curiousity. You steer the ship towards the being " << endl
         << "and recongize it as a man." << endl
         << "Do you...." << endl
         << "1 - attempt to save him" << endl
         << "2 - report it to ground control" << endl;
    cin >> choice2;
    cout << endl;

    if (choice2 == 1)
    {
        scene4();
    }
    else if (choice2 == 2)
    {
        scene3();
    }
    else
        cout << "Something went wrong with the program..." << endl;
}
void scene3()
{
    int choice3;

    cout << "You tell ground control. They tell you to carry on with your mission." << endl
         << "You linger with curiousity and contemplate on your decision." << endl
         << "Do you..." << endl
         << "1 - listen to ground control's order and carry out the mission" << endl
         << "2 - disobey the orders and head over to the being" << endl;
    cin >> choice3;
    cout << endl;

    if (choice3 == 1)
    {
        ending1();
    }
    else if (choice3 == 2)
    {
        scene4();
    }
    else
        cout << "Something went wrong with the program..." << endl;
}
void scene4()
{
    int choice4;

    cout << "You are able to bring the being into your spaceship. You inject the extraterrestrial" << endl
         << "with a healing serum. The being wakes up. You are timid and excited." << endl
         << "You..." << endl
         << "1 - approach with hostility" << endl
         << "2 - approach passively" << endl;
    cin >> choice4;
    cout << endl;

    if (choice4 == 1)
    {
        scene5();
    }
    else if (choice4 == 2)
    {
        scene6();
    }
    else
        cout << "Something went wrong with the program..." << endl;
}
void scene5()
{
    cout << "The being does not look please. It doesn't take kindly" << endl
         << "to this treatmentThe being explains that he is an explorer " << endl
         << "from Jupiter's moon Titan.He has been sent on a mission to " << endl
         << "explore Earthand must report his findings." << endl
         << endl;

    ending2();
}
void scene6()
{
    cout << "The being looks genuinely pleased by your presence" << endl;
    scene7();
}
void scene7()
{
    int choice7;

    cout << "The being explains that he is an explorer from Jupiter's moon Titan." << endl
         << "He has been sent on a mission to explore Earth" << endl
         << "and must report his findings." << endl
         << "You..." << endl
         << "1 - secretly report this information to ground control" << endl
         << "2 - help it complete it's mission" << endl;
    cin >> choice7;

    if (choice7 == 1)
    {
        ending3();
    }
    else if (choice7 == 2)
    {
        ending4();
    }
    else
        cout << "Something went wrong with the program..." << endl;
}
void ending1()
{
    cout << "You obey the mission's orders and continue with the excavation. You successfully complete the mission and return home."
         << endl
         << "Your contributions helped discover other life in space and ultimately advanced humanity" << endl
         << endl;
}
void ending2()
{
    cout << "Suddenly, your spacecraft's emergency lights turn on. There is something wrong..." << endl
         << "You quickly try to contact ground control. As you do, you see the being evacuate in your last escape pod" << endl
         << "Ground control sees your call, but doesn't respond. They are aware of you disobeying their orders." << endl
         << "Your spacecraft drifts into the unknown of space. You are abandoned...." << endl
         << endl;
}
void ending3()
{
    cout << "Suddenly, your spacecraft's emergency lights turn on. There is something wrong..." << endl
         << "You report this intel to ground control. They confirm their acknowledgement of this information and proceed" << endl
         << "to self destruct the ship. You try to contact them hastily but no response. You look to the being for help" << endl
         << "He feels betrayed because of your decision to report him to ground control. He tells you he will be fine. He will not be " << endl
         << "affect by the lack of oxygen. You are left to defend yourself but you have no other choice. You must face your consequences." << endl;
}
void ending4()
{
    cout << "Suddenly, your spacecraft's emergency lights turn on. There is something wrong..." << endl
         << "The being goes to the IT room and fixes the problem. He invites you to his home. He shows you great" << endl
         << "technological advancements that have yet to be discovered on Earth. He allows you to bring these tremendous finding." << endl
         << "You return to Earth as a hero and go down in history for your achievements." << endl;
}
