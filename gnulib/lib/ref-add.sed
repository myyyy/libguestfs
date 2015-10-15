/^# Packages using this file: / {
  s/# Packages using this file://
  ta
  :a
  s/ libguestfs / libguestfs /
  tb
  s/ $/ libguestfs /
  :b
  s/^/# Packages using this file:/
}
