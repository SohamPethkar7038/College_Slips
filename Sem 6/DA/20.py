import nltk
from nltk.corpus import stopwords
nltk.download('stopwords')

text = "Hello all, Welcome to Python Programming Academy."
words = text.lower().split()
filtered_words = [word for word in words if word not in stopwords.words('english')]
print("Filtered Text:", " ".join(filtered_words))
