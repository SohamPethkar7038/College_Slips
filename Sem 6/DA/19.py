import pandas as pd
from textblob import TextBlob
from wordcloud import WordCloud
import matplotlib.pyplot as plt

df = pd.read_csv("movie_review.csv")  # Assuming file is downloaded

# Sentiment Analysis
df['Sentiment'] = df['review'].apply(lambda x: TextBlob(str(x)).sentiment.polarity)

# Word Cloud
text = " ".join(df['review'].astype(str))
wordcloud = WordCloud().generate(text)
plt.imshow(wordcloud, interpolation='bilinear')
plt.axis("off")
plt.show()
