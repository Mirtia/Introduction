# Deception

Cyber Deception: Beyond Defense
Traditional security builds walls. Cyber deception builds illusions — fake systems, data, and signals that confuse attackers, expose their tactics, and buy defenders time. It’s a cutting-edge research field at the intersection of cybersecurity, psychology, and AI. By studying deception, we learn not only how to defend better, but also how attackers think and adapt in the wild.





Or:
Hackers, Welcome to the Maze
 What if your server isn’t what it seems?
 Cyber deception plants decoys, traps, and digital illusions to lure attackers into chasing shadows. They think they’re winning — but we’re the ones collecting their secrets. By studying deception, we learn not only how to defend better, but also how attackers think and adapt in the wild.


#Challenge

"Can you spot the trap in SSH?"

Attackers love weakly configured SSH. Imagine this:

An attacker tries 8 passwords and finally succeeds with root:root.

They change the SSH settings so anyone can log in as administrator.

Now the system is wide open.

👉 Task for you: Look at this (fake) SSH config snippet — what setting would you change to stop the attacker?

```
# /etc/ssh/sshd_config
PermitRootLogin yes
PasswordAuthentication yes
AllowUsers *
```



