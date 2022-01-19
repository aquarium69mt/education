<?php
 
// Пример на PHP
 
class User {
   public $id;
   public $name;
   public $age;
 
   public function __construct($id, $name, $age) {
       $this->id = $id;
       $this->name = $name;
       $this->age = $age;
   }
}
 
function printUsers($users)
{
   for ($i = 0; $i < count($users); $i++) {
       echo "users[" . $i . "] = { ID: " . $users[$i]->id .
            ", name: " . $users[$i]->name .
            ", age: " . $users[$i]->age . " }" . PHP_EOL;
   }
}
 
function sortUsers(&$users)
{
   $count = count($users);
   $n = $count - 1;

   for ($i = 0; $i < $count; $i++) {
      $changes = false;
      for ($j = 0; $j < $n; $j++) {
         if ($users[$j] > $users[($j + 1)]) {
            $changes = true;
            list($users[$j], $users[($j + 1)]) = array($users[($j + 1)], $users[$j]);
         }
      }
      $n--;
      if (!$changes) {
         return $users;
      }
   }
   return $users;
}

 
 $users = [
   new User(10, "Игорь", 23),
   new User(3, "Вася", 17),
   new User(1, "Елена", 18),
   new User(9, "Ольга", 20),
   new User(7, "Виктор", 33),
   new User(6, "Лариса", 21),
   new User(4, "Гена", 48),
   new User(2, "Олег", 24),
   new User(5, "Женя", 32),
   new User(8, "Кристина", 13)
 ];
 
 
 sortUsers($users);
 
 printUsers($users);
