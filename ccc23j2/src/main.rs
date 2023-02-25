#[allow(unused_imports)]
use std::io;
use std::str::FromStr;
fn main() {
    let mut scanner = Scanner::default();
    let t = scanner.next::<u64>();
    let mut result = 0;
    for _ in 0..t{
        solve(&mut result);
    }
    println!("{}",result);
}

fn solve(result : &mut i32){
    let mut s = Scanner::default();
    let msg = s.next::<String>();
    match msg.as_str(){
        "Poblano" => *result += 1500,
        "Mirasol" => *result += 6000,
        "Serrano" => *result += 15500,
        "Cayenne" => *result += 40000,
        "Thai"    => *result += 75000,
        "Habanero" => *result += 125000,
        _ => *result += 0
    };
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
