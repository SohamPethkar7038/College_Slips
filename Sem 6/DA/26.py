from gensim.summarization import summarize

text = """Hello all, Welcome to Python Programming Academy. Python Programming Academy is a nice platform to learn new programming skills."""
summary = summarize(text)
print("Summary:", summary)
