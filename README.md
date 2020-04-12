# atcoder

## 始め方

```bash
mkdir -p ~/${contest_name}/${question_name}/src
touch ~/${contest_name}/${question_name}/src/main.c
mkdir -p ~/${contest_name}/${question_name}/dist
```

## コンパイル方法

```bash
cd ~/${contest_name}/${question_name}
gcc -o ./dist/main ./src/main.c
```

## 実行方法

```bash
cd ~/${contest_name}/${question_name}
./dist/main
```
