#[allow(unused_imports)]
use std::io;
use std::str::FromStr;
fn main() {
    let mut scanner = Scanner::default();
    let t = scanner.next::<u64>();
    let val = [6,2,5,5,4,5,6,3,7,6];
    for _ in 0..t{
        solve(&val);
    }
}

fn solve(x : &[i32; 10]){
    let mut s = Scanner::default();
    let a = s.int();
    let b = s.int();

    let mut sum = a+b;
    let mut count = 0;
    
    while sum > 0{
        let num = sum % 10;
        count += x[num as usize];
        sum = sum / 10;
    }
    println!("{}",count);
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
