import hashlib

def compute_sha256(file_path):
    sha256_hash = hashlib.sha256()
    with open(file_path, "rb") as f:
        for block in iter(lambda: f.read(4096), b""):
            sha256_hash.update(block)
    return sha256_hash.hexdigest()

# Run for both original and modified file
print("Hash of input.txt:")
print(compute_sha256("input.txt"))

print("\nHash of input_modified.txt:")
print(compute_sha256("input_modified.txt"))


