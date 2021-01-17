import sys # argv
import os # path

BIN_NAME   = "tmp"
BUILD_CMD  = "g++ -std=gnu++17 -Wall -Wextra -O2 -o " + BIN_NAME
CLEAN_CMD  = "rm " + BIN_NAME

if len(sys.argv) == 1:
    print('Invalid argument')
    sys.exit()
else:
    os.system(BUILD_CMD + " ./*_" + sys.argv[1] + ".cc")

if os.path.exists(BIN_NAME):
    os.system(CLEAN_CMD)