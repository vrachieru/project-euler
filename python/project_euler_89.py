#!/usr/bin/env python
import os

def shorten(roman):
    replacements = [
        ("VIIII", "IX"), 
        ("IIII" , "IV"), 
        ("LXXXX", "XC"), 
        ("XXXX" , "XL"),
        ("DCCCC", "CM"), 
        ("CCCC" , "CD"),
    ]
    for old, new in replacements:
        roman = roman.replace(old, new)
    return roman

original = 0
improved = 0

for line in open(os.path.join(os.path.dirname(__file__), '../resources/p89-roman.txt')):
    line = line.strip()
    original += len(line)
    improved += len(shorten(line))

print original - improved