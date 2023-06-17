#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#

""" Task format
	tasks[name] = ( # string: name of task
		description,  # string: description of task
		soft_due,     # soft due date
		hard_due      # integer unix time: hard due date
	)
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
		print(">", end=" ")
		inp = input()
		cmd = inp[0]
		arg = inp[1:]
		
		
		if   cmd == 'a':
			if   arg == 't':
				print("allocating task")
				name = input("  name: ")
				if name in tasks:
					print("name taken")
				else:
					desc = input("  description: ")
					try:
						sdue = int(input("  soft due: "))
						hdue = int(input("  hard due: "))
					except ValueError:
						print("not an integer")
					tasks[name] = {}
			elif arg == 'b':
				print("allocating block")
				name = input("  name: ")
				if name in blocks:
					print("name taken")
				else:
					desc = input("  description: ")
					try:
						pass
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
