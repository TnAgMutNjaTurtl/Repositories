#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char*argv[])
{
    // from here
    if (argc <= 1)
    {
        cout << "Please give me something to work with!!!!" << endl;
        return -1;
    }
    // to here is how to return something when you dont pass anything from the command line
    
    int value = 0;
    char letter = argv[1][0];// pre attemptchar letter(1);

    
    if (strlen(argv[1]) > 1)
    {
        letter = ':';
    }

    switch (letter)
    {
        case 'A':
            cout << "     ** \n";   
            cout << "    **** \n";  
            cout << "   **//** \n";
            cout << "  **  //** \n";
            cout << " ********** \n";
            cout << "/**//////** \n";
            cout << "/**     /** \n";
            cout << "//      // \n";
            return 1; //{value = return 1;} = {bad because variable can != return} // (value + 1); 
            //break; not needed because using return in the case so program wouldnt even get to the break because it would have already returned
        case 'B':
            cout << "  ****** \n";
            cout << " /*////** \n";
            cout << " /*   /** \n";
            cout << " /****** \n";
            cout << " /*//// ** \n";
            cout << " /*    /** \n";
            cout << " /******* \n";
            cout << " /////// \n";
            return 2;
            
        case 'C':
            cout << "   ******  \n";
            cout << "  **////** \n";
            cout << " **    //  \n";
            cout << "/**        \n";
            cout << "/**        \n";
            cout << "//**    ** \n";
            cout << " //******  \n";
            cout << "  //////   \n";
            return 3;
            
        case 'D':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    **     \n";
            cout << " /*******      \n";
            cout << " ///////       \n";
            return 4;
            
        case 'E':
            cout << "  ********     \n";
            cout << " /**/////      \n";
            cout << " /**           \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /********     \n";
            cout << " ////////      \n";
            return 5;
            
        case 'F':
            cout << "  ********     \n";
            cout << " /**/////      \n";
            cout << " /**           \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            return 6;
            
        case 'G':
            cout << "    ********   \n";
            cout << "   **//////**  \n";
            cout << "  **      //   \n";
            cout << " /**           \n";
            cout << " /**    *****  \n";
            cout << " //**  ////**  \n";
            cout << "  //********   \n";
            cout << "   ////////    \n";
            return 7;
            
        case 'H':
            cout << "  **      **   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " /**********   \n";
            cout << " /**//////**   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " //      //    \n";
            return 8;
            
        case 'I':
            cout << "  **           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            return 9;
            
        case 'J':
            cout << "       **      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "  **  /**      \n";
            cout << " //*****       \n";
            cout << "  /////        \n";
            return 10;
            
        case 'K':
            cout << "  **   **      \n";
            cout << " /**  **       \n";
            cout << " /** **        \n";
            cout << " /****         \n";
            cout << " /**/**        \n";
            cout << " /**//**       \n";
            cout << " /** //**      \n";
            cout << " //   //       \n";
            return 11;
            
        case 'L':
            cout << "  **           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /********     \n";
            cout << " ////////      \n";
            return 12;
            
        case 'M':
            cout << "  ****     ****\n";
            cout << " /**/**   **/**\n";
            cout << " /**//** ** /**\n";
            cout << " /** //***  /**\n";
            cout << " /**  //*   /**\n";
            cout << " /**   /    /**\n";
            cout << " /**        /**\n";
            cout << " //         // \n";
            return 13;
            
        case 'N':
            cout << "  ****     **  \n";
            cout << " /**/**   /**  \n";
            cout << " /**//**  /**  \n";
            cout << " /** //** /**  \n";
            cout << " /**  //**/**  \n";
            cout << " /**   //****  \n";
            cout << " /**    //***  \n";
            cout << " //      ///   \n";
            return 14;
            
        case 'O':
            cout << "    *******    \n";
            cout << "   **/////**   \n";
            cout << "  **     //**  \n";
            cout << " /**      /**  \n";
            cout << " /**      /**  \n";
            cout << " //**     **   \n";
            cout << "  //*******    \n";
            cout << "   ///////     \n";
            return 15;
            
        case 'P':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**   /**     \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            return 16;
            
        case 'Q':
            cout << "    *******    \n";
            cout << "   **/////**   \n";
            cout << "  **     //**  \n";
            cout << " /**      /**  \n";
            cout << " /**    **/**  \n";
            cout << " //**  // **   \n";
            cout << "  //******* ** \n";
            cout << "   /////// //  \n";
            return 17;
            
        case 'R':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**   /**     \n";
            cout << " /*******      \n";
            cout << " /**///**      \n";
            cout << " /**  //**     \n";
            cout << " /**   //**    \n";
            cout << " //     //     \n";
            return 18;
            
        case 'S':
            cout << "   ********    \n";
            cout << "  **//////     \n";
            cout << " /**           \n";
            cout << " /*********    \n";
            cout << " ////////**    \n";
            cout << "        /**    \n";
            cout << "  ********     \n";
            cout << " ////////      \n";
            return 19;
            
        case 'T':
            cout << "  **********   \n";
            cout << " /////**///    \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     //        \n";
            return 20;
            
        case 'U':
            cout << "  **     **    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " //*******     \n";
            cout << "  ///////      \n";
            return 21;
            
        case 'V':
            cout << "  **      **   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " //**    **    \n";
            cout << "  //**  **     \n";
            cout << "   //****      \n";
            cout << "    //**       \n";
            cout << "     //        \n";
            return 22;
            
        case 'W':
            cout << "  **       **  \n";
            cout << " /**      /**  \n";
            cout << " /**   *  /**  \n";
            cout << " /**  *** /**  \n";
            cout << " /** **/**/**  \n";
            cout << " /**** //****  \n";
            cout << " /**/   ///**  \n";
            cout << " //       //   \n";
            return 23;
            
        case 'X':
            cout << "  **     **    \n";
            cout << " //**   **     \n";
            cout << "  //** **      \n";
            cout << "   //***       \n";
            cout << "    **/**      \n";
            cout << "   ** //**     \n";
            cout << "  **   //**    \n";
            cout << " //     //     \n";
            return 24;
            
        case 'Y':
            cout << "  **    **     \n";
            cout << " //**  **      \n";
            cout << "  //****       \n";
            cout << "   //**        \n";
            cout << "    /**        \n";
            cout << "    /**        \n";
            cout << "    /**        \n";
            cout << "    //         \n";
            return 25;
            
        case 'Z':
            cout << "  ********     \n";
            cout << " //////**      \n";
            cout << "      **       \n";
            cout << "     **        \n";
            cout << "    **         \n";
            cout << "   **          \n";
            cout << "  ********     \n";
            cout << " ////////      \n";
            return 26;
                
        default:
            cout << "    *******     ********  **     ** \n";
            cout << "   **/////**   **//////  /**    /** \n";
            cout << "  **     //** /**        /**    /** \n";
            cout << " /**      /** /********* /**    /** \n";
            cout << " /**      /** ////////** /**    /** \n";
            cout << " //**     **         /** /**    /** \n";
            cout << "  //*******    ********  //*******  \n";
            cout << "   ///////    ////////    ///////   \n";
            return 0;
    }
    return 0;
}