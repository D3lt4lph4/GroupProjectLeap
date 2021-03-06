#ifndef STATIC_GESTURE_HPP
#define STATIC_GESTURE_HPP

#include <cstring>
#include <iostream>

#include "Leap.h"

enum StaticGesture {
  ERROR_SG = -1,

  GRAB_ONE_HAND,

  ONE_FINGER_LEFT_HAND,
  TWO_FINGERS_LEFT_HAND,
  THREE_FINGERS_LEFT_HAND,
  FOUR_FINGERS_LEFT_HAND,
  FIVE_FINGERS_LEFT_HAND,

  ONE_FINGER_RIGHT_HAND,
  TWO_FINGERS_RIGHT_HAND,
  THREE_FINGERS_RIGHT_HAND,
  FOUR_FINGERS_RIGHT_HAND,
  FIVE_FINGERS_RIGHT_HAND,

  LEFT_ZERO_RIGHT_ZERO,
  // LEFT_ONE_RIGHT_ONE - left hand one finger, right hand one finger
  LEFT_ZERO_RIGHT_ONE,
  LEFT_ZERO_RIGHT_TWO,
  LEFT_ZERO_RIGHT_THREE,
  LEFT_ZERO_RIGHT_FOUR,
  LEFT_ZERO_RIGHT_FIVE,

  LEFT_ONE_RIGHT_ZERO,
  LEFT_ONE_RIGHT_ONE,
  LEFT_ONE_RIGHT_TWO,
  LEFT_ONE_RIGHT_THREE,
  LEFT_ONE_RIGHT_FOUR,
  LEFT_ONE_RIGHT_FIVE,

  LEFT_TWO_RIGHT_ZERO,
  LEFT_TWO_RIGHT_ONE,
  LEFT_TWO_RIGHT_TWO,
  LEFT_TWO_RIGHT_THREE,
  LEFT_TWO_RIGHT_FOUR,
  LEFT_TWO_RIGHT_FIVE,

  LEFT_THREE_RIGHT_ZERO,
  LEFT_THREE_RIGHT_ONE,
  LEFT_THREE_RIGHT_TWO,
  LEFT_THREE_RIGHT_THREE,
  LEFT_THREE_RIGHT_FOUR,
  LEFT_THREE_RIGHT_FIVE,

  LEFT_FOUR_RIGHT_ZERO,
  LEFT_FOUR_RIGHT_ONE,
  LEFT_FOUR_RIGHT_TWO,
  LEFT_FOUR_RIGHT_THREE,
  LEFT_FOUR_RIGHT_FOUR,
  LEFT_FOUR_RIGHT_FIVE,

  LEFT_FIVE_RIGHT_ZERO,
  LEFT_FIVE_RIGHT_ONE,
  LEFT_FIVE_RIGHT_TWO,
  LEFT_FIVE_RIGHT_THREE,
  LEFT_FIVE_RIGHT_FOUR,
  LEFT_FIVE_RIGHT_FIVE,

};

/**
 * \class StaticGestures
 * \brief Class to get a gesture.
 **/
class StaticGestures {
 private:
  StaticGesture detectGestureOneHand();
  StaticGesture detectGestureTwoHands();

  Leap::HandList hands;
  int handCount;

 public:
  StaticGestures() {}
  StaticGestures(Leap::HandList hands);
  ~StaticGestures();

  /**
   * \fn StaticGesture StaticGestures::getGesture()
   * \brief Returns the gesture.
   **/
  StaticGesture getGesture();
};

#endif
