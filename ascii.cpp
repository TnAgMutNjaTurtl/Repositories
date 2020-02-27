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
            value = (value + 2);
            break;
        case 'C':
            cout << "   ******  \n";
            cout << "  **////** \n";
            cout << " **    //  \n";
            cout << "/**        \n";
            cout << "/**        \n";
            cout << "//**    ** \n";
            cout << " //******  \n";
            cout << "  //////   \n";
            value = (value + 2);
            break;
        case 'D':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    **     \n";
            cout << " /*******      \n";
            cout << " ///////       \n";
            value = (value + 2);
            break;
        case 'E':
            cout << "  ********     \n";
            cout << " /**/////      \n";
            cout << " /**           \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /********     \n";
            cout << " ////////      \n";
            value = (value + 2);
            break;
        case 'F':
            cout << "  ********     \n";
            cout << " /**/////      \n";
            cout << " /**           \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            value = (value + 2);
            break;
        case 'G':
            cout << "    ********   \n";
            cout << "   **//////**  \n";
            cout << "  **      //   \n";
            cout << " /**           \n";
            cout << " /**    *****  \n";
            cout << " //**  ////**  \n";
            cout << "  //********   \n";
            cout << "   ////////    \n";
            value = (value + 2);
            break;
        case 'H':
            cout << "  **      **   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " /**********   \n";
            cout << " /**//////**   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " //      //    \n";
            value = (value + 2);
            break;
        case 'I':
            cout << "  **           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            value = (value + 2);
            break;
        case 'J':
            cout << "       **      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "      /**      \n";
            cout << "  **  /**      \n";
            cout << " //*****       \n";
            cout << "  /////        \n";
            value = (value + 2);
            break;
        case 'K':
            cout << "  **   **      \n";
            cout << " /**  **       \n";
            cout << " /** **        \n";
            cout << " /****         \n";
            cout << " /**/**        \n";
            cout << " /**//**       \n";
            cout << " /** //**      \n";
            cout << " //   //       \n";
            value = (value + 2);
            break;
        case 'L':
            cout << "  **           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " /********     \n";
            cout << " ////////      \n";
            value = (value + 2);
            break;
        case 'M':
            cout << "  ****     ****\n";
            cout << " /**/**   **/**\n";
            cout << " /**//** ** /**\n";
            cout << " /** //***  /**\n";
            cout << " /**  //*   /**\n";
            cout << " /**   /    /**\n";
            cout << " /**        /**\n";
            cout << " //         // \n";
            value = (value + 2);
            break;
        case 'N':
            cout << "  ****     **  \n";
            cout << " /**/**   /**  \n";
            cout << " /**//**  /**  \n";
            cout << " /** //** /**  \n";
            cout << " /**  //**/**  \n";
            cout << " /**   //****  \n";
            cout << " /**    //***  \n";
            cout << " //      ///   \n";
            value = (value + 2);
            break;
        case 'O':
            cout << "    *******    \n";
            cout << "   **/////**   \n";
            cout << "  **     //**  \n";
            cout << " /**      /**  \n";
            cout << " /**      /**  \n";
            cout << " //**     **   \n";
            cout << "  //*******    \n";
            cout << "   ///////     \n";
            value = (value + 2);
            break;
        case 'P':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**   /**     \n";
            cout << " /*******      \n";
            cout << " /**////       \n";
            cout << " /**           \n";
            cout << " /**           \n";
            cout << " //            \n";
            value = (value + 2);
            break;
        case 'Q':
            cout << "    *******    \n";
            cout << "   **/////**   \n";
            cout << "  **     //**  \n";
            cout << " /**      /**  \n";
            cout << " /**    **/**  \n";
            cout << " //**  // **   \n";
            cout << "  //******* ** \n";
            cout << "   /////// //  \n";
            value = (value + 2);
            break;
        case 'R':
            cout << "  *******      \n";
            cout << " /**////**     \n";
            cout << " /**   /**     \n";
            cout << " /*******      \n";
            cout << " /**///**      \n";
            cout << " /**  //**     \n";
            cout << " /**   //**    \n";
            cout << " //     //     \n";
            value = (value + 2);
            break;
        case 'S':
            cout << "   ********    \n";
            cout << "  **//////     \n";
            cout << " /**           \n";
            cout << " /*********    \n";
            cout << " ////////**    \n";
            cout << "        /**    \n";
            cout << "  ********     \n";
            cout << " ////////      \n";
            value = (value + 2);
            break;
        case 'T':
            cout << "  **********   \n";
            cout << " /////**///    \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     /**       \n";
            cout << "     //        \n";
            value = (value + 2);
            break;
        case 'U':
            cout << "  **     **    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " /**    /**    \n";
            cout << " //*******     \n";
            cout << "  ///////      \n";
            value = (value + 21);
            break;
        case 'V':
            cout << "  **      **   \n";
            cout << " /**     /**   \n";
            cout << " /**     /**   \n";
            cout << " //**    **    \n";
            cout << "  //**  **     \n";
            cout << "   //****      \n";
            cout << "    //**       \n";
            cout << "     //        \n";
            value = (value + 22);
            break;
        case 'W':
            cout << "  **       **  \n";
            cout << " /**      /**  \n";
            cout << " /**   *  /**  \n";
            cout << " /**  *** /**  \n";
            cout << " /** **/**/**  \n";
            cout << " /**** //****  \n";
            cout << " /**/   ///**  \n";
            cout << " //       //   \n";
            value = (value + 23);
            break;
        case 'X':
            cout << "  **     **    \n";
            cout << " //**   **     \n";
            cout << "  //** **      \n";
            cout << "   //***       \n";
            cout << "    **/**      \n";
            cout << "   ** //**     \n";
            cout << "  **   //**    \n";
            cout << " //     //     \n";
            value = (value + 24);
            break;
        case 'Y':
            cout << "  **    **     \n";
            cout << " //**  **      \n";
            cout << "  //****       \n";
            cout << "   //**        \n";
            cout << "    /**        \n";
            cout << "    /**        \n";
            cout << "    /**        \n";
            cout << "    //         \n";
            value = (value + 25);
            break;
        case 'Z':
            cout << "  ********     \n";
            cout << " //////**      \n";
            cout << "      **       \n";
            cout << "     **        \n";
            cout << "    **         \n";
            cout << "   **          \n";
            cout << "  ********     \n";
            cout << " ////////      \n";
            value = (value + 26);
            break;    
        default:
            cout << "    *******     ********  **     ** \n";
            cout << "   **/////**   **//////  /**    /** \n";
            cout << "  **     //** /**        /**    /** \n";
            cout << " /**      /** /********* /**    /** \n";
            cout << " /**      /** ////////** /**    /** \n";
            cout << " //**     **         /** /**    /** \n";
            cout << "  //*******    ********  //*******  \n";
            cout << "   ///////    ////////    ///////   \n";
    }
    return value;
}