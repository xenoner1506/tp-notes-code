# git

## Базовые понятия

- Есть удаленный репозиторий. Он находится на каком-то сервере
- Мы можем копировать удаленный репозиторий на локальную машину
- `origin` - псевдоним/синоним для указания на удаленный репозиторий
- `HEAD` - указывает на текущее положение в дереве коммитов
- [Памятка о работе с несколькими удаленными репозиториями](https://git-scm.com/book/ru/v2/%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D1%8B-Git-%D0%A0%D0%B0%D0%B1%D0%BE%D1%82%D0%B0-%D1%81-%D1%83%D0%B4%D0%B0%D0%BB%D1%91%D0%BD%D0%BD%D1%8B%D0%BC%D0%B8-%D1%80%D0%B5%D0%BF%D0%BE%D0%B7%D0%B8%D1%82%D0%BE%D1%80%D0%B8%D1%8F%D0%BC%D0%B8)

## Базовые команды

- `git init` - инициализировать версионирование репозитория
- `git clone link` - перенести репозиторий по ссылке `link` на локальную машину
- `git add filename` - добавить файл в систему версионирования
- `git commit` - создать слепок текущего состояния репозитория
  - `git commit -m "message"` - добавить сразу сообщение к слепку
- `git push origin HEAD` - перенести текущую версию (`HEAD`) проекта в удаленный репозиторий по ссылке `origin`
- `git checkout branch/name` - перенестись на другую ветку (переместить `HEAD`)
- `git fetch origin` - подтянуть изменения из удаленного репозитория `origin`, но не применять изменения на локальный репозиторий
- `git remote add new-origin link.to.new.origin` - добавить еще одну ссылку на удаленный репозиторий, псевдоним нового подключенного репозитория `new-origin`

## Слияние

- Слияние используется для обновления состояния ветки
- `git merge origin/master` - слить изменения удаленного мастера (удаленность указывается через `origin`) в текущую ветку
- `git merge branch/name` - слить изменения из ветки `branch/name` в текущую ветку
- `git pull origin HEAD` - комбинация команд `git fetch origin` и `git merge HEAD`, объединяются локальная ветка `branch/name` и ее удаленная копия `origin/branch/name`
- [Памятка о работе со слияниями](https://git-scm.com/book/ru/v2/%D0%92%D0%B5%D1%82%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5-%D0%B2-Git-%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D1%8B-%D0%B2%D0%B5%D1%82%D0%B2%D0%BB%D0%B5%D0%BD%D0%B8%D1%8F-%D0%B8-%D1%81%D0%BB%D0%B8%D1%8F%D0%BD%D0%B8%D1%8F)

## Ветки

- `git branch` - показать текущую ветку
  - `git branch -a` - показать все ветки
- `git branch -m branch/source branch/renamed` - переименование ветки `branch/source` в ветку `branch/renamed`
- `git branch -D branch/to-be-deleted-locally` - удаление локальной ветки с названием `branch/to-be-deleted-locally`
- `git push origin --delete branch/to-be-deleted-remotely` - удаление веткив удаленном репозитории с названием `branch/to-be-deleted-remotely`

## git checkout

Команда перемещения. Перемещаться можно между коммитами, ветками и т.д.
- `git checkout [hash] [branch/name]` - перемещение на определенный коммит, ветку
- `git checkout [hash] -- path/to/file` - перенос опредленной версии файла в текущую ветку
- `git checkout -b branch/name` - создание новой ветки и переход на нее
- `git checkout -b branch/based/on/source branch/source ` - создание новой ветки с названием `branch/based/on/source` из ветки `branch/source`

## Rebase

- `git rebase branch/name` - перенести текущую ветку на ветку `branch/name`
    - `git rebase branch/name -i` - перенести текущую ветку на ветку `branch/name` в интерактивном режиме
- `git rebase --abort` - отменить процесс переноса
- `git rebase --continue` - используется после решения конфликтной ситуации, продолжает процесс переноса
- `git rebase --skip` - используется для подхвата изменений из ветки `branch/name`

## Перенос коммитов

- `git cherry-pick [hash][..hash]` - копия коммитов с одной ветки на текущую, переносятся только изменения из файлов (если файла не было на ветке, то он создастся и будут вписаны строки изменения)
