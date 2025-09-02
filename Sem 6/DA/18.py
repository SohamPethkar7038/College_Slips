from wordcloud import WordCloud
import matplotlib.pyplot as plt

text = "Keep working. Keep striving. Never give up. Fall down seven times, get up eight."
text = re.sub(r"[^a-zA-Z\s]", "", text).lower()

wordcloud = WordCloud().generate(text)
plt.imshow(wordcloud, interpolation='bilinear')
plt.axis("off")
plt.show()
