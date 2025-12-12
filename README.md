# OS Labs Summary Notebook

# Lab 2: Ubuntu FileSystem Hierarchy

## Key Concepts
- The Ubuntu filesystem follows the Linux Filesystem Hierarchy Standard (FHS), with the root directory (/) as the top level.
- Key directories:  
  `/bin` (essential binaries), `/etc` (configuration files), `/home` (user home directories),  
  `/var` (variable data like logs), `/usr` (user programs and data), `/tmp` (temporary files),  
  `/boot` (boot loader files), `/lib` (system libraries), `/opt` (optional software), `/srv` (service data).

## Additional Explanations and Tips
- The filesystem separates system files from user data for security and organization.  
- Use **absolute paths** in scripts for reliability.  
- For visualization, install and use `tree` to display directory structures.  
- Backups should prioritize `/home` and `/etc`.  
- Common issues: Permission errors — use `sudo` judiciously.

## Useful Commands (Expanded)

| Command | Description | Example |
|--------|-------------|---------|
| ls | List directory contents | ls -la |
| cd | Change directory | cd /etc |
| pwd | Print working directory | pwd |
| mkdir | Create directory | mkdir -p /path/to/new/dir |
| rmdir | Remove empty directory | rmdir empty_dir |
| rm | Remove files/directories | rm -rf dir |
| cp | Copy files/directories | cp -r source dest |
| mv | Move/rename files | mv old new |
| touch | Create empty file or update timestamp | touch file.txt |
| cat | Display files | cat file.txt |
| less / more | Paginated view | less file.txt |
| head / tail | View beginning/end | tail -f log.txt |
| grep | Search text | grep "error" log.txt |
| find | Search for files | find /home -name "*.txt" |
| du | Disk usage | du -sh /var |
| df | Disk free space | df -h |
| chmod | Change permissions | chmod 755 script.sh |
| chown | Change owner | chown user:group file |
| ln | Create links | ln -s source link |
| tar | Archive files | tar -czvf archive.tar.gz dir |
| unzip / zip | Handle zip files | unzip file.zip |

**Tip:** Use pipes (`|`) and redirection (`>`, `>>`).  
System info: `uname -a`, `lsb_release -a`.

---

# Lab 3: Fish Shell and Running C++ Programs in Ubuntu

## Key Concepts
- **Fish Shell:** User-friendly shell with syntax highlighting, autosuggestions, tab completion.
- Install: `sudo apt update && sudo apt install fish`
- Switch shell: `fish`
- Make default: `chsh -s /usr/bin/fish`
- C++: Install `g++`, compile with `g++ file.cpp -o output`, run with `./output`.

## Additional Explanations and Tips
- Fish simplifies scripting with intuitive syntax.
- For C++, use flags to optimize or debug.
- Sorting algorithms vary based on dataset size.

## Useful Fish Commands (Expanded)

| Command | Description | Example |
|---------|-------------|---------|
| fish_add_path | Add to PATH permanently | fish_add_path /usr/local/bin |
| abbr | Create abbreviations | abbr -a gcm 'git commit -m' |
| funced | Edit function | funced myfunc |
| set | Set variables | set -U myvar value |
| functions | List functions | functions |
| alias | Create aliases | alias ll 'ls -la' |
| fish_config | Open web config | fish_config |
| history | View command history | history |

## C++ Compilation Commands

| Command/Flag | Description | Example |
|--------------|-------------|---------|
| g++ | Compile | g++ file.cpp -o out |
| -std=c++11 | Standard | g++ -std=c++11 file.cpp -o out |
| -Wall | Warnings | g++ -Wall file.cpp -o out |
| -O2 | Optimize | g++ -O2 file.cpp -o out |
| -g | Debug info | g++ -g file.cpp -o out |
| gdb | Debug | gdb ./out |
| ./out | Run | ./out < input.txt |

---

# Lab 4: Git

## Key Concepts
- Git: Distributed VCS created by Linus Torvalds in 2005.

## Additional Explanations and Tips
- Git uses **snapshots**, not diffs.
- Commit often with meaningful messages.
- Use `.gitignore` for excluding files.

## Essential Git Commands (Expanded)

| Command | Description | Example |
|---------|-------------|---------|
| git init | Initialize repo | git init |
| git clone | Clone repo | git clone URL |
| git add | Stage changes | git add . |
| git commit | Commit changes | git commit -m "msg" |
| git status | Status | git status |
| git log | View history | git log --oneline --graph |
| git branch | Manage branches | git branch new |
| git checkout | Switch branches | git checkout main |
| git merge | Merge branches | git merge feature |
| git pull | Fetch + merge | git pull origin main |
| git push | Push changes | git push -u origin main |
| git remote | Manage remotes | git remote add origin URL |
| git diff | Show changes | git diff HEAD |
| git reset | Unstage/reset | git reset HEAD file |
| git rebase | Rebase commits | git rebase main |
| git stash | Stash changes | git stash |
| git tag | Tag commits | git tag v1.0 |
| git blame | Who changed what | git blame file |
| git bisect | Find bugs | git bisect start |

---

# Lab 5: Git in VS Code

## Key Concepts
- Clone from **Command Palette**.
- Staging via **+ button**.
- Sync for push/pull.
- Branch management via status bar.

## Useful VS Code Git Shortcuts/Commands

| Shortcut/Command | Description |
|------------------|-------------|
| Ctrl+Shift+P > Git: Clone | Clone repo |
| Source Control > Initialize | Init repo |
| + icon | Stage changes |
| Commit button | Commit |
| Sync Changes | Push/Pull |
| Branch indicator | Branches |
| Ctrl+Shift+G | Open Source Control |
| Git: Pull | Pull |
| Git: Push | Push |
| Git: Merge | Merge |
| Git: Stash | Stash |
| Conflict tools | Resolve conflicts |

---

# Lab 7: Docker

## Key Concepts
- Docker: Containerization for consistent environments.
- Images = blueprints; containers = instances.

## Essential Docker Commands (Expanded)

| Command | Description | Example |
|---------|-------------|---------|
| docker --version | Check version | |
| docker info | System info | |
| docker pull | Pull image | docker pull nginx |
| docker images | List images | |
| docker rmi | Remove image | docker rmi nginx |
| docker build | Build image | docker build -t myimage . |
| docker run | Run container | docker run -d -p 80:80 nginx |
| docker ps | List containers | docker ps -a |
| docker start/stop | Control containers | docker start id |
| docker rm | Remove container | docker rm id |
| docker exec | Execute inside | docker exec -it id sh |
| docker logs | View logs | docker logs id |
| docker inspect | Details | docker inspect id |
| docker stats | Usage | docker stats |
| docker volume | Manage volumes | docker volume create vol |
| docker network | Manage networks | docker network ls |
| docker system prune | Clean up | docker system prune -a |
| docker login | Login | docker login |
| docker push | Push image | docker push myimage |
| docker tag | Tag image | docker tag image newtag |

---

# Lab 8: Docker Compose

## Key Concepts
- Manages multi-container apps.
- Declarative, networked, scalable.

## Essential Docker Compose Commands

| Command | Description | Example |
|---------|-------------|---------|
| docker compose up | Start | docker compose up -d |
| docker compose down | Stop/remove | docker compose down -v |
| docker compose build | Build | |
| docker compose ps | List | |
| docker compose logs | Logs | docker compose logs -f |
| docker compose exec | Execute | docker compose exec service sh |
| docker compose config | Validate | |
| docker compose restart | Restart | |
| docker compose run | One-off | |
| docker compose scale | Scale | docker compose up --scale frontend=3 |
| docker compose pull | Pull images | |
| docker compose push | Push images | |
| docker compose version | Version | |

---

# Lab 10: Hosts and Services

## Key Concepts
- Host: machine providing resources.
- Types: Shared, VPS, Dedicated, Cloud/IaaS.

## Comparison Table

| Type | Control | Cost | Example |
|------|---------|------|---------|
| Shared | Low | Low | GoDaddy |
| VPS | Medium | Medium | DigitalOcean |
| Dedicated | High | High | OVH |
| Cloud/IaaS | Flexible | Pay-as-you-go | AWS EC2 |

---

# Lab 11: CI/CD, GitHub Actions, and Vercel Deployment

## Key Concepts
- CI/CD automates integrate/build/deploy.
- GitHub Actions uses YAML workflows.
- Vercel supports auto-deployment.

## Essential GitHub Actions Workflow Syntax

| Key | Description | Example |
|-----|-------------|---------|
| `on:` | Triggers | on: [push, pull_request] |
| `jobs:` | Define jobs | jobs: build |
| `steps:` | Steps inside job | |
| `run:` | Shell commands | run: npm install |
| `env:` | Environment vars | |
| `if:` | Condition | |
| `with:` | Inputs | |
| echo | Output text | echo "Hello" |
| ::group:: | Group logs | |
| ::debug:: | Debug logs | |

---
**Tip:** For Vercel: link repo → auto deploy.  
Use `vercel --prod` in workflows if needed.
