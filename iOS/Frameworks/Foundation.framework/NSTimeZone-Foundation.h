//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimeZone.h>

@interface NSTimeZone (Foundation)
+ (id)_timeZoneDataVersion;
+ (id)_knownTimeZoneIdentifiers;
+ (void)_setAbbreviationDictionary:(id)arg1;
+ (id)_abbreviationDictionary;
+ (id)_resetSystemTimeZone;
+ (void)_setDefaultTimeZone:(id)arg1;
+ (id)_default;
+ (id)_current;
+ (id)_autoupdating;
+ (id)_timeZoneWithAbbreviation:(id)arg1;
+ (id)_timeZoneWithName:(id)arg1 tryAbbrev:(_Bool)arg2;
+ (id)_timeZoneWithSecondsFromGMT:(long long)arg1;
+ (id)_timeZoneWithName:(id)arg1;
+ (id)_timeZoneWithName:(id)arg1 data:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
@end

