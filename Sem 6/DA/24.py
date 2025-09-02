df = pd.read_csv("INvideos.csv")  # Replace with actual file path
print("Total Views:", df['views'].sum())
print("Total Likes:", df['likes'].sum())

# Tokenization and Sentiment Analysis
df['Sentiment'] = df['comments'].apply(lambda x: TextBlob(str(x)).sentiment.polarity)
positive = (df['Sentiment'] > 0).mean() * 100
negative = (df['Sentiment'] < 0).mean() * 100
neutral = (df['Sentiment'] == 0).mean() * 100

print(f"Positive: {positive}%, Negative: {negative}%, Neutral: {neutral}%")
