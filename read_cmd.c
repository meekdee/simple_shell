void read_cmd(char *cmd,size_t size)
{
    if (fgets(command,size,stdin) === NULL && feof(stdin){
        
            _print("\n");
            exit(EXIT_SUCCESS);
      }
        else{
            _print("Cannot read output.\n");
            exit(EXIT_FAILURE);
        }
    
    command[strcspn(cmd,"\n")] = '\0';
}
