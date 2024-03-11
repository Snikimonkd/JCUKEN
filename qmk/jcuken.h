#pragma once

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, /**/ k46, k45, k44, k43, k42, k41, k40, \
         k11, k12, k13, k14, k15, k16, /**/ k56, k55, k54, k53, k52, k51, \
         k21, k22, k23, k24, k25, k26, /**/ k66, k65, k64, k63, k62, k61, \
                   k33, k34, k35, k36, /**/ k76, k75, k74, k73 \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06 },\
  { KC_NO, k11, k12, k13, k14, k15, k16 },\
  { KC_NO, k21, k22, k23, k24, k25, k26 },\
  { KC_NO, KC_NO, KC_NO, k33, k34, k35, k36 },\
  { k40, k41, k42, k43, k44, k45, k46 }, \
  { KC_NO, k51, k52, k53, k54, k55, k56 }, \
  { KC_NO, k61, k62, k63, k64, k65, k66 }, \
  { KC_NO, KC_NO, KC_NO, k73, k74, k75, k76 } \
}
