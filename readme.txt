Protocol Buffers - Google's data interchange format
Copyright 2008 Google Inc.
https://developers.google.com/protocol-buffers/
This package contains a precompiled binary version of the protocol buffer
compiler (protoc). This binary is intended for users who want to use Protocol
Buffers in languages other than C++ but do not want to compile protoc
themselves. To install, simply place this binary somewhere in your PATH.
If you intend to use the included well known types then don't forget to
copy the contents of the 'include' directory somewhere as well, for example
into '/usr/local/include/'.
Please refer to our official github site for more installation instructions:
  https://github.com/protocolbuffers/protobuf


task:
Задача 1. Информация о фильме с кинопортала


Что нужно сделать
Запишите подробную информацию о киноленте в виде JSON-файла. Выберите понравившуюся вам картину на любимом портале, проанализируйте информацию о ней и составьте JSON-словарь.

В информации должны присутствовать: страна и дата создания киноленты, студия, которая вела съёмки, автор сценария, режиссёр и продюсер киноленты. Обязательно добавьте информацию обо всех главных действующих лицах и тех актёрах, которые их сыграли.



Задача 2. Анализ данных о фильмах


Что нужно сделать
Используя модель данных из задачи №1, создайте JSON-документ, но теперь уже для пяти различных кинолент. Ключи в этой JSON-базе данных должны быть названиями фильмов, а значениями служить уже словари с информацией о картинах.

Загрузите базу данных в C++-программу для последующего анализа. Предусмотрите следующий функционал: поиск актёра по имени (или фамилии) и вывод в консоль названий кинолент, в которых снимался актёр, и роль, которую он исполнял.





Задача 3. Модель данных компании на Protobuf


Что нужно сделать
Создайте модель данных для информации о предприятии. Обязательные поля: год основания (целое 32-битное число), юридический адрес (строка) и название (строка). Опциональные поля: род деятельности (строка), осуществление внешнеэкономической деятельности (булевый тип)

Опишите модель на языке proto2 и сохраните её в отдельный документ с расширением proto. Затем на основе созданного документа сгенерируйте C++-код с помощью компилятора protoc.

