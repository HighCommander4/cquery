class Parent {};
class Derived : public Parent {};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": "c:@S@Parent",
      "short_name": "Parent",
      "detailed_name": "Parent",
      "kind": 7,
      "definition_spelling": "1:7-1:13",
      "definition_extent": "1:1-1:16",
      "parents": [],
      "derived": [1],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["1:7-1:13", "2:24-2:30"]
    }, {
      "id": 1,
      "usr": "c:@S@Derived",
      "short_name": "Derived",
      "detailed_name": "Derived",
      "kind": 7,
      "definition_spelling": "2:7-2:14",
      "definition_extent": "2:1-2:33",
      "parents": [0],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["2:7-2:14"]
    }],
  "funcs": [],
  "vars": []
}
*/
