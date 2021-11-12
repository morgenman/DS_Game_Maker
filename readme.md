# No Exit
## To build:
1. Copy the files inside `CustomActions` to `C:\Program Files (x86)\DS Game Maker\Actions\`

2. Choose the most recent `.dsgm` project file and open it in DSGM

3. Copy the following three files from `CPP BACKUP` to `C:\DSGMTempSomethingRandom` (choosing the right folder of course, it's randomly generated every time)

4. Compile!

## Working on C++
Make sure to edit C++ code in the git repository, and copy the updated files to the source folder when you actually build. \
The exception to this is MyWrapper.h
When changed, you need to reimport it. See the other C++ section below for how that works.\

## Custom Actions
Actions are a great way of making it easy for non-CodeMonkeys to use our code!\
Unfortunately, they do not get saved in the project. \
Just as you copied the actions in `CustomActions` to  `C:\Program Files (x86)\DS Game Maker\Actions\` when building, you also need to copy new or edited actions from `C:\Program Files (x86)\DS Game Maker\Actions\` to the `CustomActions` folder so other members can use them. 

## Installer
**Note: You need to go to `C:\Windows\System32\drivers\etc` and add the following
line to your hosts file:**\
`127.0.0.1 dsgamemaker.com`\
To do this, you will have to open notepad as admin, then File->Open\

## C++ Code
To use C++ in your code:

1. Tools -> Game Settings -> Coding -> Include Files: 
    * add `MyWrapper.h`
2. Copy other 3 files to `C:/DSGM_TEMP_FOLDER/source` (whatever it's called)
3. Put the following code somewhere in your project:
```c
struct MyApp *c = newMyClass();
PA_LoadText(1, 0, &Pixel); // Include this if you haven't initialized the text yet
int k = 0;
k = test(c, 5);
if (k == 0) {
  Draw_Text(1, 3, 12, "wrong value");
} else if (k == 6) {
  Draw_Text(1, 3, 12, "Worked");
} else {
  Draw_Text(1, 3, 12, "failure");
}
Draw_Text(1, 3, 13, stringTest(c));
Draw_Text(1, 3, 14, stringTest2(c));	
deleteMyClass(c);
```
You should see the following text on the top screen:
```
WORKED
YO
HELLO MY DUDES
```

## Examples
Everything in the examples folder is a project for PALib. It is useful to see
all of the functions available and how it works.\
To build, double click on `build.bat`