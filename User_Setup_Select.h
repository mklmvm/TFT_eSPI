// This header file contains a list of user setup files and defines which one the
// compliler uses when the IDE performs a Verify/Compile or Upload.
//
// Users can create configurations for different Espressiff boards and TFT displays.
// This makes selecting between hardware setups easy by "uncommenting" one line.

// The advantage of this hardware configuration method is that the examples provided
// with the library should work with different setups immediately without any other
// changes being needed. It also improves the portability of users sketches to other
// hardware configurations and compatible libraries.
//
// Create a shortcut to this file on your desktop to permit quick access for editting.
// Re-compile and upload after making and saving any changes to this file.

// Customised User_Setup files are stored in the "User_Setups" folder.

// Only ONE line should be uncommented.  Add extra lines and files as needed.

#include <User_Setup.h>           // Default setup is root library folder

//#include <User_Setups/Setup1_ILI9341.h>  // Setup file configured for my ILI9341
//#include <User_Setups/Setup2_ST7735.h>   // Setup file configured for my ST7735
//#include <User_Setups/Setup3_ILI9163.h>  // Setup file configured for my ILI9163
//#include <User_Setups/Setup4_S6D02A1.h>  // Setup file configured for my S6D02A1
//#include <User_Setups/Setup5_RPi_ILI9486.h>     // Setup file configured for my stock RPi TFT
//#include <User_Setups/Setup6_RPi_Wr_ILI9486.h>  // Setup file configured for my modified RPi TFT

//#include <User_Setups/SetupX_Template.h> // Setup file template for copying/editting





/////////////////////////////////////////////////////////////////////////////////////
//                                                                                 //
//     DON'T TINKER WITH ANY OF THE FOLLOWING LINES, THESE ADD THE TFT DRIVERS     //
//                     THEY ARE HERE FOR BODMER'S CONVENIENCE!                     //
//                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////

// Load the right driver definition - do not tinker here !
#if   defined (ILI9341_DRIVER)
     #include <TFT_Drivers/ILI9341_Defines.h>
#elif defined (ST7735_DRIVER)
     #include <TFT_Drivers/ST7735_Defines.h>
#elif defined (ILI9163_DRIVER)
     #include <TFT_Drivers/ILI9163_Defines.h>
#elif defined (S6D02A1_DRIVER)
     #include <TFT_Drivers/S6D02A1_Defines.h>
#elif defined (RPI_ILI9486_DRIVER)
     #include <TFT_Drivers/RPI_ILI9486_Defines.h>
#endif
