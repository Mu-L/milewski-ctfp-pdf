module Writer_Join = (W: Monoid) => {
  let join = (Writer(Writer(a, w'), w)) => Writer(a, W.mappend(w, w'));
};
