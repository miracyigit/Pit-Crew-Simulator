#include <iostream>
using namespace std;

int main()
{
    int tyreWear=100, engineTemp=85, currentPosition=10, remainingFuel=100, userChoice,engineFailure=0,tyreFailure=0,fuelShortage=0;

    for(int lap =1;lap<=30;lap++)
    {
        cout << "============================================================\n";
        cout << "   🏎️  F1 PITSTOP TELEMETRY v1.0  |  LAP: " << lap << " / 30  |  POS: P" << currentPosition << " \n";
        cout << "============================================================\n";
        cout << " [TYRE WEAR]: \t   [";
        
        for(int i=1; i<=10; i++)
        {
            if(i<=tyreWear/10)
            {
                cout<<"█";
            }
            else
            {
                cout<<"░";
            }  
        }
        cout<< "] "<< tyreWear<<"%";

        cout << "\n [ENGINE TEMP]:    [";
        
        for(int j=1;j<=10;j++)
        {
            if(j<=engineTemp/13)
            {
                cout<<"█";
            }
            else
            {
                cout<<"░";
            }
        
            
        }
        cout<<"] "<< engineTemp << " °C (CRITICAL LIMIT: 130 °C)\n";
        cout<<" [REMAINING FUEL]: [";
        for(int z=1; z<=10;z++)
        {
            if(z<=remainingFuel/10)
            {
                cout<<"█";
            }
            else
            {
                cout<<"░";
            }
        }
        cout<<"] "<< remainingFuel << "%"<< endl;
        cout << "------------------------------------------------------------\n";
        cout<<"TEAM RADIO: \"Box, box! What's our strategy for this lap?\"\n";
        cout<<"[1] 🔥 Push Hard (Overtake rivals, burns tyres & engine)\n";
        cout<<"[2] ⚖️ Balanced Pace (Standard stint, moderate wear)\n";
        cout<<"[3] 🛠️ Box for Pit-Stop (Fresh tyres & fuel, lose 3 positions)\n";
        cin>>userChoice;

        switch(userChoice)
        {
            case 1:
            {
                currentPosition=currentPosition-1;
                if(currentPosition<1)
                {
                    currentPosition=1;
                }
                engineTemp=engineTemp+11;
                tyreWear=tyreWear-11;
                remainingFuel=remainingFuel-10;
                break;
            }
            case 2:
            {
                currentPosition=currentPosition;
                 if(currentPosition<1)
                {
                    currentPosition=1;
                }
                engineTemp=engineTemp-5;

                if(engineTemp<75)
                {
                    engineTemp=75;
                }

                tyreWear=tyreWear-5;
                remainingFuel=remainingFuel-6;
                break;
            }
            case 3:
            {
                currentPosition=currentPosition+3;
                if (currentPosition>20)
                {
                    currentPosition=20;
                }
                engineTemp=engineTemp-30;
                if (engineTemp<75)
                {
                    engineTemp=75;
                }
                
                tyreWear=100;
                remainingFuel=100;
                break;
            }

        }//switch parantezi
        if(engineTemp>130)
        {
            engineFailure=1;
        }
        else if(tyreWear<=0)
        {
            tyreFailure=1;
        }
        else if (remainingFuel<=0)
        {
            fuelShortage=1;
        }

        if (engineFailure==1 || tyreFailure==1 || fuelShortage==1)
        {
            cout << "\n============================================================\n";
            cout << "         💥  D N F  -  R A C E   O V E R  💥\n";
            cout << "============================================================\n";
            cout << "         (  )   (   )  )\n";
            cout << "          ) (   )  (  (               TEAM RADIO:\n";
            cout << "          ( )  (    ) )               \"Huge impact! Are you okay?!\n";
            cout << "        _.-\"\"\"\"---...._               Shut down the engine now!\n";
            cout << "     .-'  🔥   💥      '-.            We are retiring the car...\"\n";
            cout << "    /===_    _=========_  \\\n";
            cout << "   [(X)] '=='         [( )]  ~ 🛞     [ RETIRED ON LAP: " << lap << " / 30 ]\n";
            cout << "============================================================\n";
            break;
        }
        else if((currentPosition==1 || currentPosition==2 || currentPosition==3) && lap==30)
        {
            cout << "\n============================================================\n";
            cout << "       🏆  P O D I U M   C E L E B R A T I O N  🏆\n";
            cout << "============================================================\n";
            cout << "                 🌟\n";
            cout << "                \\🏆/                   TEAM RADIO:\n";
            cout << "            .----||----.              \"YES! GET IN THERE!\n";
            cout << "       🥈   |          |              What a masterclass drive!\n";
            cout << "     .----. |    P1    |   🥉         Champagne time, baby!\"\n";
            cout << "     | P2 | |          | .----.\n";
            cout << "  ___|____|_|__________|_|_P3_|___    [ FINAL RESULT: P" << currentPosition << " ]\n";
            cout << "============================================================\n";
            break;
        }
        else if (currentPosition<=20 && currentPosition>=4 && lap==30)
        {
                cout << "\n============================================================\n";
                cout << "       🏁  C H E C K E R E D   F L A G  🏁\n";
                cout << "============================================================\n";
                cout << "    ||====================================\n";
                cout << "    || ▓▓░░▓▓░░▓▓░░▓▓░░   TEAM RADIO:\n";
                cout << "    || ░░▓▓░░▓▓░░▓▓░░▓▓   \"Checkered flag! Tough race out\n";
                cout << "    || ▓▓░░▓▓░░▓▓░░▓▓░░   there today, but we brought the\n";
                cout << "    || ░░▓▓░░▓▓░░▓▓░░▓▓   car home in one piece.\"\n";
                cout << "    ||\n";
                cout << "    ||                    [ FINAL RESULT: P" << currentPosition << " ]\n";
                cout << "============================================================\n";
                break;
        }
    }//büyük for parantezi
    return 0;
}//main parantezi