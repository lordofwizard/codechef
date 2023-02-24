#[allow(unused_imports)]
use std::io;
use std::str::FromStr;
fn main() {
    let mut scanner = Scanner::default();
    let t = scanner.next::<u64>();
    for _ in 0..t{
        solve();
    }
}

fn solve(){
    let mut s = Scanner::default();
    let s = s.next::<String>();

    if s.len() > 10 {
        let r = s.as_str();
        let mut s = String::new();
        s.push_str(&r[0..1]);
        s.push_str((r.len()-2).to_string().as_str());
        s.push_str(&(&r.chars().last().unwrap().to_string().as_str()));
        println!("{}",s);
    }
    else{
        println!("{}",s);
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
