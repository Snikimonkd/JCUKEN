#pragma once

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, /**/ k40, k41, k42, k43, k44, k45, k46, \
         k11, k12, k13, k14, k15, k16, /**/ k50, k51, k52, k53, k54, k55, \
         k21, k22, k23, k24, k25, k26, /**/ k60, k61, k62, k63, k64, k65, \
                   k33, k34, k35, k36, /**/ k70, k71, k72, k73\
) { \
  { k00, k01, k02, k03, k04, k05, k06 },\
  { KC_NO, k11, k12, k13, k14, k15, k16 },\
  { KC_NO, k21, k22, k23, k24, k25, k26 },\
  { KC_NO, KC_NO, KC_NO, k33, k34, k35, k36 },\
  { k40, k41, k42, k43, k44, k45, k46 },\
  { k50, k51, k52, k53, k54, k55, KC_NO },\
  { k60, k61, k62, k63, k64, k65, KC_NO },\
  { k70, k71, k72, k73, KC_NO, KC_NO, KC_NO,}\
}