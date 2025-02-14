import kagglehub

# Download latest version
path = kagglehub.dataset_download("arifmia/heart-attack-risk-dataset")

print("Path to dataset files:", path)