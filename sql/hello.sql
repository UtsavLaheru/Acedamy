define
a number;
b number;
begin
  a:=&a;
  b:=&b;
  dbms_output.put_line("Number"||a||"Number"||b)
end;