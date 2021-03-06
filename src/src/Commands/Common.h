#ifndef COMMAND_COMMON_H
#define COMMAND_COMMON_H

#include <ctype.h>
#include <Arduino.h>

class IPAddress;

String return_command_success();
String return_command_failed();
String return_not_connected();
String return_result(struct EventStruct *event,
                     const String      & result);
String return_see_serial(struct EventStruct *event);

bool   IsNumeric(const char *source);

String Command_GetORSetIP(struct EventStruct *event,
                          const String      & targetDescription,
                          const char         *Line,
                          byte               *IP,
                          const IPAddress&    dhcpIP,
                          int                 arg);

String Command_GetORSetString(struct EventStruct *event,
                              const String      & targetDescription,
                              const char         *Line,
                              char               *target,
                              size_t              len,
                              int                 arg
                              );

String Command_GetORSetBool(struct EventStruct *event,
                            const String      & targetDescription,
                            const char         *Line,
                            bool               *value,
                            int                 arg);

#endif // COMMAND_COMMON_H
