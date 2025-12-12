# 📝 OS Labs Summary Notebook

A clean, practical summary of the provided OS Lab PDFs — organized by lab number and enriched with additional explanations, commands, tips, and best practices. This notebook is designed as a quick-reference guide for students or developers working with Ubuntu, shell scripting, version control, containerization, deployment, and more.

---

## 📂 Lab 2 — Ubuntu FileSystem Hierarchy

### 🔑 Key Concepts from PDF

* Ubuntu follows the Linux Filesystem Hierarchy Standard (FHS).
* The root directory `/` contains essential folders:

  * `/bin` → binaries
  * `/etc` → configuration files
  * `/home` → user data
  * `/var` → logs / variable data
  * `/usr` → user programs

### 💡 Additional Explanations

* Clear separation between system files and user files improves maintainability and security.
* `/mnt` and `/media` are used for mounting external devices.
* Use the `tree` command for visualizing directory structure.

### 🧰 Useful Commands

| Command                    | Description              | Example       |
| -------------------------- | ------------------------ | ------------- |
| `ls /`                     | List root directory      | —             |
| `cd /etc`                  | Navigate to config files | `cd /etc; ls` |
| `df -h`                    | Check disk usage         | —             |
| `du -sh /var`              | Directory size           | —             |
| `find /home -name "*.txt"` | Search for files         | —             |

> Tip: Always use **absolute paths** in scripts to avoid path-related errors.

---

## 🐟 Lab 3 — Fish Shell & Running C++ in Ubuntu

### 🔑 Key Concepts from PDF

* **Fish Shell** provides syntax highlighting, autosuggestions, tab completion, universal variables, and a clean syntax.
* Install on Ubuntu:

  ```bash
  sudo apt update && sudo apt install fish
  ```
* Set Fish as default:

  ```bash
  chsh -s /usr/bin/fish
  ```
* **C++ Programs**:

  * Install compiler: `sudo apt install g++`
  * Compile: `g++ file.cpp -o output`
  * Run: `./output`

### 💡 Additional Explanations

* Fish requires no `.bashrc` hacks — it works out of the box.
* Use `-Wall` for warnings, `-O2` for optimization.
* Bubble sort is slow (O(n²)); Merge/Quick sort are O(n log n) — use them for large inputs.

### 🧙 Useful Fish Commands

* `fish_add_path /usr/local/bin`
* `abbr -a gcm 'git commit -m'`
* `funced myfunc`

### 🧩 C++ Compilation Flags

| Flag         | Purpose       | Example                   |
| ------------ | ------------- | ------------------------- |
| `-std=c++11` | Enable C++11  | `g++ file.cpp -std=c++11` |
| `-g`         | Debug symbols | `g++ -g file.cpp`         |
| `-l<lib>`    | Link library  | `-lm`                     |

### Example Merge Sort Snippet

```cpp
#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int l, int m, int r) { /* merge logic */ }

void mergeSort(std::vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    // input → sort → output
    return 0;
}
```

---

## 🧱 Lab 4 — Git

### 🔑 Key Concepts from PDF

* Git is a distributed VCS created by Linus Torvalds (2005).
* Tracks snapshots, supports branches, merging, and remote repos like GitHub.

### 💡 Additional Notes

* Git stores full snapshots, not diffs → very efficient branching.
* Useful for all project sizes.

### 🧰 Essential Git Commands

| Command                     | Description           |
| --------------------------- | --------------------- |
| `git init`                  | Initialize repository |
| `git add .`                 | Stage all changes     |
| `git commit -m "msg"`       | Commit snapshot       |
| `git remote add origin URL` | Add GitHub remote     |
| `git push -u origin main`   | First push            |
| `git pull`                  | Fetch + merge         |
| `git branch`                | List branches         |
| `git merge branch`          | Merge changes         |
| `git log --oneline`         | Short log             |
| `git status`                | Check repo status     |

> Tip: Always use a `.gitignore`. Commit often. Use clear, meaningful messages.

---

## 🧩 Lab 5 — Git in VS Code

### 🔑 Key Concepts from PDF

* Clone using Command Palette (`Ctrl+Shift+P`)
* Initialize repo (like `git init`)
* Stage, commit, push, pull directly inside VS Code
* Diff view highlights changes
* Timeline shows file history
* Branch management via status bar

### 💡 Additional Tips

* Install **GitLens** for advanced history & blame features.
* Always **pull before pushing** to avoid conflicts.

### VS Code Git Shortcuts

* `Ctrl + Shift + G` → Source Control
* Use **+ button** to stage changes
* Inline conflict resolver during merges

---

## 🐳 Lab 7 — Docker

### 🔑 Key Concepts from PDF

* Docker provides lightweight containers for consistent environments.
* Common commands: pull, images, rmi, build, run, ps, stop, logs, stats.
* Dockerfile fundamentals: `FROM`, `RUN`, `COPY`, `WORKDIR`, `CMD`, `ENTRYPOINT`.

### 💡 Additional Explanations

* Images = blueprints
* Containers = running instances
* Volumes provide persistent data
* Use Docker Hub for sharing images

### 🧰 Advanced Docker Commands

| Command                        | Description               |
| ------------------------------ | ------------------------- |
| `docker run -d -p 80:80 nginx` | Detached Nginx on port 80 |
| `docker exec -it <id> sh`      | Shell access              |
| `docker volume create vol`     | Create volume             |
| `docker network ls`            | List networks             |

> Tip: Use `docker system prune` to clean unused images and containers.

---

## 🧩 Lab 8 — Docker Compose

### 🔑 Key Concepts

* `docker-compose.yml` defines multi-container apps
* Commands: `up`, `down`, `build`, `logs`, `ps`
* Supports networking, environment variables, scaling

### 💡 Additional Tips

* Use **healthchecks** for reliable startup order
* Common version: `'3.8'`
* Shared volumes/networks at top-level

### Example

```yaml
services:
  db:
    image: postgres
    environment:
      POSTGRES_PASSWORD: example
```

> Tip: `docker-compose up --scale frontend=3` enables horizontal scaling.

---

## 🌐 Lab 10 — Hosts and Services

### 🔑 Key Concepts

* Host types: shared, VPS, dedicated, cloud (IaaS)
* VPS = isolated but shared resources
* Cloud = scalable pay-as-you-go

### Comparison Table

| Type       | Control  | Cost     | Example      |
| ---------- | -------- | -------- | ------------ |
| Shared     | Low      | Low      | GoDaddy      |
| VPS        | Medium   | Medium   | DigitalOcean |
| Dedicated  | High     | High     | OVH          |
| Cloud/IaaS | Flexible | Variable | AWS EC2      |

---

## 🚀 Lab 11 — CI/CD, GitHub Actions, Vercel Deployment

### 🔑 Key Concepts

* CI = automated testing/build on push
* CD = automated deployment
* GitHub Actions uses YAML workflows
* Vercel automatically deploys web apps from GitHub

### 💡 Additional Notes

* Actions are free on public repos
* Vercel is great for Next.js and static sites
* Use repository secrets for API keys

### Example (Extended)

```yaml
- name: Deploy
  run: vercel --prod
```

---