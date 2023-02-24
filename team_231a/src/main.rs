#[allow(unused_imports)]
use std::io;
use std::str::FromStr;
fn main() {
    let mut scanner = Scanner::default();
    let t = scanner.next::<u64>();
    let mut x: i64 = 0;
    for _ in 0..t{
        solve(&mut x);
    }
    println!("{}",x);
}

fn solve(x_ : &mut i64){
    let mut s = Scanner::default();
    let mut vec : Vec<i64> = Vec::new();
    let x = s.int();
    let y = s.int();
    let z = s.int();
    vec.push(x);
    vec.push(y);
    vec.push(z);
    
    let mut flag = 0;
    for i in vec.iter(){
        if *i == 1{
            flag+=1;
        }
    }
    if flag >= 2{
        *x_+=1;
    }
}

#[derive(Default)]
struct Scanner {
    input: Vec<String>,
}
#[allow(dead_code)]
impl Scanner {
    fn next<T: FromStr>(&mut self) -> T {
        loop {
            if let Some(value) = self.input.pop() {
                return value.parse().ok().expect("Failed at parsing!");
            }
            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed at taking inputs");
            self.input = input
                .trim()
                .split_whitespace()
                .rev()
                .map(String::from)
                .collect();
        }
    }

    fn int(&mut self) -> i64 {
        loop {
            if let Some(value) = self.input.pop() {
                return value.parse().ok().expect("Failed at parsing!");
            }
            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed at taking inputs");
            self.input = input
                .trim()
                .split_whitespace()
                .rev()
                .map(String::from)
                .collect();
        }
    }
}
