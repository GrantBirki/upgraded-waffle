# About

This is where scripts go that are executed by either `autokey` (Linux) or `autohotkey` (Windows).

## Example

When you press a key on your macro pad it types `shift+alt+1`. This triggers an `autohotkey` function that *then* invokes a Python function which makes an API call to find a cool cat photo.

Logic flow like so: `you press button` -> `triggers AHK script` -> `triggers some Python script` -> `Python script does a thing`.

## Config.yml

The `config.yml` file is where all your specific configurations and credentails should go. Do NOT commit this file to Git. It is in the `.gitignore` file for a reason 😄.
