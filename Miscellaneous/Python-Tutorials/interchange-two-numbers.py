#!/usr/bin/env python
# encoding: utf-8

def main():
    a = int(raw_input())
    b = int(raw_input())
    b, a = a, b
    print a
    print b

if __name__ == '__main__':
    main()