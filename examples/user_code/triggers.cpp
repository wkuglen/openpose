// C++ std library dependencies
#include <chrono> // `std::chrono::` functions and classes, e.g. std::chrono::milliseconds
#include <thread> // std::this_thread
// Other 3rdparty dependencies
// GFlags: DEFINE_bool, _int32, _int64, _uint64, _double, _string
#include <gflags/gflags.h>
// Allow Google Flags in Ubuntu 14
#ifndef GFLAGS_GFLAGS_H_
    namespace gflags = google;
#endif
// OpenPose dependencies
#include <openpose/headers.hpp>

void swipeRightToLeft() {
  printf("RIGHT TO LEFT trigger\n");
  /* code */
  char cmd [1000];
  sprintf(cmd, "osascript -e 'tell application \"System Events\"' -e '	key code 124 using {control down}' -e 'end tell'");
  system(cmd);
}

void swipeLeftToRight() {
  printf("LEFT TO RIGHT trigger\n");
  /* code */
  char cmd [1000];
  sprintf(cmd, "osascript -e 'tell application \"System Events\"' -e '	key code 123 using {control down}' -e 'end tell'");
  system(cmd);
}

void swipeChromeRight() {
  printf("RIGHT TO LEFT trigger\n");
  /* code */
  char cmd [1000];
  sprintf(cmd, "osascript -e 'tell application \"Google Chrome\" to set active tab index of first window to ((get the active tab index of first window of application \"Google Chrome\") + 1)'");
  system(cmd);
}

void swipeChromeLeft() {
  printf("LEFT TO RIGHT trigger\n");
  /* code */
  char cmd [1000];
  sprintf(cmd, "osascript -e 'tell application \"Google Chrome\" to set active tab index of first window to ((get the active tab index of first window of application \"Google Chrome\") - 1)'");
  system(cmd);
}

void openURL() {
  char cmd [1000];
  sprintf(cmd, "osascript -e 'set myLink to \"https://www.youtube.com/watch?v=6bywWYOzZdY\"' -e 'tell application \"Google Chrome\"' -e '	tell its window 1' -e '		set theTabs to count of tabs' -e '		set URL of tab 1 to myLink' -e '	end tell' -e 'end tell' -e 'tell application \"Google Chrome\" to set active tab index of first window to 1'");
  system(cmd);
}
