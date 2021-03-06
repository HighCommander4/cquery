struct ForwardType;
struct ImplementedType {};

void foo(ForwardType* f, ImplementedType a) {}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": "c:@S@ForwardType",
      "short_name": "",
      "detailed_name": "",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [0],
      "uses": ["1:8-1:19", "4:10-4:21"]
    }, {
      "id": 1,
      "usr": "c:@S@ImplementedType",
      "short_name": "ImplementedType",
      "detailed_name": "ImplementedType",
      "kind": 6,
      "definition_spelling": "2:8-2:23",
      "definition_extent": "2:1-2:26",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [1],
      "uses": ["2:8-2:23", "4:26-4:41"]
    }],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": "c:@F@foo#*$@S@ForwardType#$@S@ImplementedType#",
      "short_name": "foo",
      "detailed_name": "void foo(ForwardType *f, ImplementedType a)",
      "kind": 12,
      "declarations": [],
      "definition_spelling": "4:6-4:9",
      "definition_extent": "4:1-4:47",
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": []
    }],
  "vars": [{
      "id": 0,
      "usr": "c:type_usage_declare_param.cc@60@F@foo#*$@S@ForwardType#$@S@ImplementedType#@f",
      "short_name": "f",
      "detailed_name": "ForwardType *f",
      "definition_spelling": "4:23-4:24",
      "definition_extent": "4:10-4:24",
      "variable_type": 0,
      "kind": 25,
      "uses": ["4:23-4:24"]
    }, {
      "id": 1,
      "usr": "c:type_usage_declare_param.cc@76@F@foo#*$@S@ForwardType#$@S@ImplementedType#@a",
      "short_name": "a",
      "detailed_name": "ImplementedType a",
      "definition_spelling": "4:42-4:43",
      "definition_extent": "4:26-4:43",
      "variable_type": 1,
      "kind": 25,
      "uses": ["4:42-4:43"]
    }]
}
*/
