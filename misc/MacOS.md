# MacOS Compiler / CLion Setup

### Install Developer Tools for MacOS
1. Open up the `Terminal` application on your Mac (all computers have this app already installed)
2. Copy and paste the following command in the terminal prompt, then press "enter"
```
xcode-select --install
```
3. A pop up will appear prompting you to install command line developer tools. Click the **Install** button
4. To confirm that you have a clang compiler installed for C++. Run the following command in a terminal. You should see the version number displayed in the terminal window
```
clang --version
```
5. Done! You can now close your termainal and continue following the instructions below to install CLion

### Install CLion
For this course we will be using the CLion IDE by JetBrains to do most of our program development. This is an IDE that was specifically designed for C++ developers and provides a lot of helpful tools to make your programming experience better and more efficient. 

1. First, you need to sign up for a JetBrains student license. If you do not have one already, visit [https://www.jetbrains.com/shop/eform/students](https://www.jetbrains.com/shop/eform/students) to acquire your free license. (Remember your password as you will need it later)
2. Once you have a Student License you may download CLion by visiting the downloads page [https://www.jetbrains.com/clion/download/](https://www.jetbrains.com/clion/download/). Then click **Download**
3. Next, you will activate your CLion / JetBrains account. To do so make sure `Get license from` has `JB Account` selected, then enter your username and password that you created when setting up your student license in step 1.
4. Click `Next` after your license has been verified
5. Configure your Toolchain - After you installed developer tools, CLion should automatically detect a working Cmake and Debugger version. click `Start using CLion` to complete the setup. 
6. Thats it! You now have CLion installed and are ready to begin your first program! 

**Continue on to Part 2**

**If you ever need to check your Toolchain settings they can be found by navigating to Preferences | Build, Execution, Deployment | Toolchains**

### Other information
If you need additional help with setup, you may find these steps helpful. The steps above were simplified from these steps outlined here: [https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-macos.html#reqtools](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-macos.html#reqtools). 