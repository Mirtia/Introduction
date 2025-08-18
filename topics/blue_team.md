# Blue Team

## What is it?

In cybersecurity, _blue team_ is how we commonly call teams dedicated to defend and protect systems.
To Protect the "crown jewls" (the important stuff), blue teams focus on three aspects:
- Prevention
- Mitigation
- Control

These are cyclic, i.e., each improves the others.
Preventing, mitigating, and controlling **security incidents** are often the result of evaluating **risk levels**, i.e., to determine how valuable and vulnerable is an asset, and the consequences of something happening to it (e.g., data breach, exposure, denial of access, downtime, etc.).
Once we know our risks, we can plan ahead and decide what to do: Should we leave it be? Do we need to focus on reducing the risk level? Can it wait? is there a dependancy?

But there is more! What if something happens despite all of our efforts?
Blue teams also **respond** to security incidents, actively trying to put the fire off (isolating systems and fixing what is broken on the go), and after the storm wears off with extensive **incident reports** to learn: i) What did just happen? ii) What did we do? and iii) How can prevent this from happening again?

The rabbit hole in how blue teams operate is deep, from collecting **[OSINT](osint.md)**, to **analyzing network events** and running **forensics**, and if you are curious, you should give a read to some of the following sources:
- How Cybersecurity Really Works (ISBN13: 9781718501287)
- Cybersecurity Blue Team Toolkit (ISBN13: 9781119552932)

## Challenge

### Title
Misconfigured SSH

### Description
SSH is one of the most common protocols to controll systems remotely.
It provides us with a Secure Shell (an encrypted channel) to communicate, so we can interact with other systems safely.
It provides, authentication, access control, and many other security features we are looking for in any protocol to communicate between two systems.

However, misconfigured SSH services can also give the same powers to anybody else! like, anybody on the Internet.
Therefore, it is extra important to restrict who has access to this service and the level of access we grant them.

Most spreading malware will scan the Internet for open SSH services and try to get into the system, by either brute forcing their way in, using known vulnerabilities in the service, or, if the service is completely insecure, by just getting in without need for any credentials.

Malware often nest in the system, creating **persistance**, and often manipulating the configuration of the SSH service to allow malicious users to interact with the system on their own terms (e.g., by placing their own credentials and blocking anybody else).

### Scenario

**Alarm!** our secret sauce was leaked on the Internet.
Our systems indicate the system where the recipe was stored was hacked.
After 8 failed login attempts, the hacker found our extra-strong credentials `root:root`.
**Disaster!** this cannot happen again :( please fix the server.
Can you take a look at the SSH config file?
The server is in a vault, far away from the fabrics (`fabric-a` and `fabric-s`), so they need to access the system remotely often.

### Task

Your mission on this challenge is to fix the configuration of the SSH service that was exposed to the Internet, and was modified by an attacker to allow anybody into the system as an administrator (with the highest privileges).

- [config file](https://github.com/DTU-Hacker-Lab/Introduction/resources/blue_team-ssh)

(You can test your configuration using a Docker container with SSH)
