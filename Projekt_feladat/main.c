#include <stdio.h>
#include <string.h>

#define VERSION "alap v0.0.1"

void getinfo(){
    printf("%s\n\n",VERSION);

    printf("Usage: alap <template_id> [option]\n\n");

    printf("Avaliable options:\n\n");

    printf("-h, --help \t show this help\n");
    printf("-v, --version \t version info\n");
    printf("--stdout \t don't create source file, print result to stdout\n\n");

    printf("Avaliable templates:\n\n");

    printf("* c \t - C source code [main.c]\n");
    printf("* sh \t - Bash source code [main.sh]\n");
    printf("* cs \t - C# source code [Program.cs]\n");
    printf("* py \t - Python source code [main.py]\n");
}

void file_c(){
    char* file_name = "main.c";
    FILE *file = fopen(file_name, "r");
    if (file != NULL) {
        fclose(file);
        printf("The file doesn't exists.\n");
    } else {
        file = fopen(file_name, "w");
        if (file != NULL) {
            fprintf(file, "#include <stdio.h>\n\nint main() {\n\tprintf(\"Hello, World!\\n\");\n\treturn 0;\n}\n");
            fclose(file);
        }
    }
}

void file_sh(){
    char* file_name = "main.sh";
    FILE *file = fopen(file_name, "r");
    if (file != NULL) {
        fclose(file);
        printf("The file doesn't exists.\n");
    } else {
        file = fopen(file_name, "w");
        if (file != NULL) {
            fprintf(file, "#!/bin/bash\n\necho \"Hello, World!\"\n");
            fclose(file);
        }
    }
}

void file_cs(){
    char* file_name = "Program.cs";
    FILE *file = fopen(file_name, "r");
    if (file != NULL) {
        fclose(file);
        printf("The file doesn't exists.\n");
    } else {
        file = fopen(file_name, "w");
        if (file != NULL) {
            fprintf(file, "using System;\n\nclass HelloWorld\n{\n\tstatic void Main() {\n\t\tConsole.WriteLine(\"Hello, World!\");\n\t}\n}\n");
            fclose(file);
        }
    }
}

void file_py(){
    char* file_name = "main.py";
    FILE *file = fopen(file_name, "r");
    if (file != NULL) {
        fclose(file);
        printf("The file doesn't exists.\n");
    } else {
        file = fopen(file_name, "w");
        if (file != NULL) {
            fprintf(file, "#!/usr/bin/env python3\n\n\ndef main():\n\tpass\n\nif __name__ == \"__main__\":\n\tmain()\n");
            fclose(file);
        }
    }
}


int main(int argc, char* const argv[]){
    if(argc == 1){
        getinfo();

        return 0;
    }
    else if(argc == 2){
        if(strcmp(argv[1], "c")==0){
            file_c();

            return 0;
        }
        if(strcmp(argv[1], "sh")==0){
            file_sh();

            return 0;
        }
        if(strcmp(argv[1], "cs")==0){
            file_cs();

            return 0;
        }
        if(strcmp(argv[1], "py")==0){
            file_py();

            return 0;
        }

        if(strcmp(argv[1], "-h")==0 || strcmp(argv[1], "--help")==0){
            getinfo();

            return 0;
        }

        if(strcmp(argv[1], "-v")==0 || strcmp(argv[1], "--version")==0){
            printf("%s\n",VERSION);

            return 0;
        }

        printf("The argument isn't correct.\n");

        return 1;
    }
    else if(argc == 3){
        if(strcmp(argv[2], "--stdout")==0){
            if(strcmp(argv[1], "c")==0){
                printf("#include <stdio.h>\n\nint main() {\n\tprintf(\"Hello, World!\\n\");\n\treturn 0;\n}\n");

            return 0;
            }
            if(strcmp(argv[1], "sh")==0){
                printf("#!/bin/bash\n\necho \"Hello, World!\"\n");

                return 0;
            }
            if(strcmp(argv[1], "cs")==0){
                printf("using System;\n\nclass HelloWorld\n{\n\tstatic void Main() {\n\t\tConsole.WriteLine(\"Hello, World!\");\n\t}\n}\n");

                return 0;
            }
            if(strcmp(argv[1], "py")==0){
                printf("#!/usr/bin/env python3\n\n\ndef main():\n\tpass\n\nif __name__ == \"__main__\":\n\tmain()\n");

                return 0;
            }
        }
        
        printf("the optional command in the second argument is --stdout or in the first argument isn't right.\n");
        return 1; 
    }
    else{
        printf("Too many arguments...\n");
        return 1;
    }   
}
