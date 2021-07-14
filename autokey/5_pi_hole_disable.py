from subprocess import run
from os.path import expanduser

home = expanduser("~")
run(['python3', f'{home}/upgraded-waffle/scripts/5_pi_hole_disable.py'], check=True, text=True)