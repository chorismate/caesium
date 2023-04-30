#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#

""" Important notes
"""

""" Task format
	tasks[name] = [         # name: name of task
		"desc": string,       # description
		"sdue": int unix_time # soft due date
		"hdue": int unix_time # hard due date
	]
"""
tasks = {}

""" Block format
	blocks[name] = ( # name (string): name of block
		description,   # description (string): description of block
		hard           # hard (boolean): whether hard or not
	)
"""
blocks = {}

if __name__ == "__main__":
	print("Caesium by Chorismate - a time management utility")
	print("h for help")
	
	
	while True:
		print("> ", end="")
		inp = input()
		cmd = inp[0]
		arg = inp[1:]
		
		
		if   cmd == 'a':
			if   arg == 'd':
				print("Allocating task.")
				name = input("  Name: ")
				if name in tasks:
					print("Another task already exists with the same name.")
				else:
					desc = input("  Description: ")
					try:
						sdue = int(input("  Soft due date: "))
						hdue = int(input("  Hard due date: "))
					except ValueError:
						print("Not a valid integer.")
					tasks[name] = {}
			elif arg == 'b':
				print("Allocating block.")
				name = input("  Name: ")
				if name in blocks:
					print("Another block already exists with the same name.")
			
		elif cmd == 'd':
			pass
			
		elif cmd == 'h':
			print(
				"Commands\n"
				"  a: allocate\n"
				"  d: deallocate\n"
				"  q: quit\n"
				"  s: save\n"
				"Objects for 'a' and 'd'\n"
				"  b: block\n"
				"  t: task\n"
			)
			
		elif cmd == 's':
			pass
			
		else:
			print("Command not recognized.")
