void bfs() {
  unordered_set<STRUCT> bfsCur, bfsNext;
  bool condition;

  // update bfsNext w/ initial conditions
  // bfsNext.push();
  
  while(!condition) {
    swap(bfsCur, bfsNext);
    while(!bfsCur.empty()) {
      STRUCT element = *bfsCur.begin();

      // check condition and break
      // if (...) {condition = true; break;}

      // do something with the element
      // bfsNext.push(element.substr(1));
    }
  }

  // epilogue, manage
}
