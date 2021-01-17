import sys
import os
import shutil

LEVEL = ['a','b','c','d','e','f']

def usage():
    print('Usage:')
    print('  python3 ' + sys.argv[0] + ' <File prefix> <Option>')

# Check arguments.
if len(sys.argv) < 2:
    print('Invalid argument')
    usage()
    sys.exit()

# Check if the template file exists.
if not os.path.exists('./lib/template.cc'):
    print('Template file does not exist')
    usage()
    sys.exit()

# Check if the dst file already exists. (Skip here with "-f")
if len(sys.argv) == 2 or sys.argv[2] != '-f':
    for level in LEVEL:
        if os.path.exists(sys.argv[1] + '_' + level + '.cc'):
            print('The file already exists. Forcibly overwrite with "-f"')
            sys.exit()
            usage()

# Create file and copy.
with open('./lib/template.cc', 'r') as sf:
    for level in LEVEL:
        shutil.copyfile('./lib/template.cc', sys.argv[1] + '_' + level + '.cc')