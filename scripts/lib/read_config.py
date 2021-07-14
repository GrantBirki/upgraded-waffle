from yaml import safe_load, YAMLError
from os.path import expanduser



def read_config():
    home = expanduser("~")
    path = 'upgraded-waffle/scripts/config.yml'
    with open(f"{home}/{path}", 'r') as stream:
        try:
            return safe_load(stream)
        except YAMLError as exc:
            print(exc)
            return 'failed to load config'