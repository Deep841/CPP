/*
LRU cache : 
- least recently used, (key-value pair m hota h sb)
  purane data ko cache se niklnge n naye data ko daalnge 
  ek constructor hoga aur 2 functions honge (I) get : jo key pass krne pe value dega aur 
  (II) put : jisme hum naya key-value pair daalnge 
  agar cache ki capacity full hogyi tabhi hum purani (LRU) value delete krnge aur nyi add krnge
  now see video for how get put works

- we will use doubly LL (jisme head pe hoga(MRU) Most Recently Used data...n tail pe LRU data), map
  doubly LL mein -1, -1 values daal di head n tail pe...always inserting in the middle of head n tail
  see code of how to add new node
  aur jab same key pr diff data aa rha hai toh purani value ko delete kr ke nyi daal denge

- ab jab cache ki capacity hit hogyi (bhr gyi)
  
- https://leetcode.com/problems/lru-cache/description/
*/