### Required imports for config file loading ###
import sys
from os.path import expanduser
sys.path.insert(0, f'{expanduser("~")}/upgraded-waffle/scripts/lib')
from read_config import read_config
config = read_config()
################################################

import requests
requests.get(f'http://{config["PIHOLE_ADDR"]}/admin/api.php?disable=30&auth={config["PIHOLE_PW"]}')
