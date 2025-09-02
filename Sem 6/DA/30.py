import pandas as pd
from textblob import TextBlob
from wordcloud import WordCloud
import matplotlib.pyplot as plt

# Load dataset (Assuming 'movie_review.csv' is available)
df = pd.read_csv("movie_review.csv")  

# Drop missing values (if any)
df.dropna(subset=['review'], inplace=True)

# Function to calculate sentiment polarity
def get_sentiment(text):
    return TextBlob(str(text)).sentiment.polarity

# Apply sentiment analysis
df['Sentiment'] = df['review'].apply(get_sentiment)

# Categorize sentiment as Positive, Neutral, or Negative
df['Sentiment Category'] = df['Sentiment'].apply(lambda x: 'Positive' if x > 0 else ('Negative' if x < 0 else 'Neutral'))

# Print sentiment counts
print(df['Sentiment Category'].value_counts())

# Generate WordCloud
text = " ".join(df['review'].astype(str))
wordcloud = WordCloud(width=800, height=400, background_color="black").generate(text)

# Plot the WordCloud
plt.figure(figsize=(10, 5))
plt.imshow(wordcloud, interpolation='bilinear')
plt.axis("off")
plt.show()
