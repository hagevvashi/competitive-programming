# atcoder

## 始め方

```bash
cd ${contest_dir}
mkdir -p ${contest_name}/${question_name}/src
mkdir -p ${contest_name}/${question_name}/dist
cd ${contest_name}/${question_name}
cp ../../../template.c ./src/main.c
```

## コンパイル方法

```bash
cd ${contest_dir}/${contest_name}/${question_name}
gcc -std=c11 -o ./dist/main.out ./src/main.c
```

## 実行方法

```bash
cd ${contest_dir}/${contest_name}/${question_name}
./dist/main.o
```

## コンパイルと実行を一緒にやった方が楽だからこう

```bash
cd ${contest_dir}/${contest_name}/${question_name}
gcc -std=c11 -o ./dist/main.out ./src/main.c && ./dist/main.out
```

## 提出方法(Mac)

```bash
cd ${repo_dir}/${contest_name}/${question_name}
cat ./src/main.c | pbcopy
```
