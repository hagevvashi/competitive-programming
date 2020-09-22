# atcoder

## 始め方

```bash
cd ${repo_dir}
mkdir -p ${contest_name}/${question_name}/src
mkdir -p ${contest_name}/${question_name}/dist
cd ${contest_name}/${question_name}
cp ../../../template.c ./src/main.c
```

## コンパイル方法

```bash
cd ${repo_dir}/${contest_name}/${question_name}
gcc -std=c11 -o ./dist/main.out ./src/main.c
```

## 実行方法

```bash
cd ${repo_dir}/${contest_name}/${question_name}
./dist/main.o
```

## 提出方法(Mac)

```bash
cd ${repo_dir}/${contest_name}/${question_name}
cat ./src/main.c | pbcopy
```
