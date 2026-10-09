const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question(
  "Enter your age, height, grade and name (space intervaled): ",
  (input) => {
    const [age, height, grade, name] = input.split(" ");
    console.log(`Your name is ${name}`);
    console.log(`You are ${age} years old,  ${name}`);
    console.log(`You are in ${grade}`);
    console.log(`You are ${height}cm tall ${name}`);
    readline.close();
  },
);
