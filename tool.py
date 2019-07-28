from setuptools import find_packages, setup
import subprocess
import json



def main():
        AInstalled=[]
        Installed=[]
        NotInstalled=[]
        with open("tool.json", 'r') as f:
            datastore = json.load(f)
            tool_list = datastore['dependencies']

        for item in tool_list:
            cmd_check = f"pip install {item}"
            c = subprocess.Popen(cmd_check.split(),shell=True, stdout=subprocess.PIPE)

            output = c.communicate()[0].decode("utf-8")
            
            if "Requirement already satisfied:" in output:
                AInstalled.append(item);
            elif "Successfully installed" in output:
                Installed.append(item);
            else:
                
                NotInstalled.append(item);

        for item in NotInstalled:       
                  print(item + " not installed")
        for item in AInstalled:
                  print(item + " is already installed")
        for item in Installed:          
                  print(item + " installed successfully")

if __name__ == '__main__':
    main()
