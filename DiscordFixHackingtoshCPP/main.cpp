//
//  main.cpp
//  DiscordFixHackingtoshCPP
//
//  Created by psyko on 11/06/2022.
//

#include <iostream>
#include <stdlib.h>

void Cmd(void);
void Plist(void);

int main(int argc, const char * argv[]) {
    Cmd();
    printf("Done!\n");
    return 0;
}

void Cmd(){
    system("killall Discord");
    printf("Editing of Discord to discord_ / Debug CPU 5\n");
    system("cd /Applications/Discord.app/Contents/MacOS && echo 'MKL_DEBUG_CPU_TYPE=5 ./Discord' > discord_");
    
    Plist();
}

void Plist(){
    system("/usr/libexec/PlistBuddy -c \"set :CFBundleExecutable discord_\" \"/Applications/Discord.app/Contents/Info.plist\"");
    system("open /Applications/ -a Discord.app");
}
