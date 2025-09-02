import re
from collections import Counter

text = """Keep working. Keep striving. Never give up. Fall down seven times, get up eight."""
text = re.sub(r"[^a-zA-Z\s]", "", text).lower().split()

# Word frequency
word_freq = Counter(text)
print("Word Frequencies:", word_freq)
