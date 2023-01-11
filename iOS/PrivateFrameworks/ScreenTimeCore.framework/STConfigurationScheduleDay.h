//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>
#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface STConfigurationScheduleDay : NSObject <NSCopying, NSSecureCoding>
{
    NSDateComponents *_startTime;
    NSDateComponents *_endTime;
    unsigned long long _weekday;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long weekday; // @synthesize weekday=_weekday;
@property(readonly) NSDateComponents *endTime; // @synthesize endTime=_endTime;
@property(readonly) NSDateComponents *startTime; // @synthesize startTime=_startTime;
- (unsigned long long)hash;
- (_Bool)isEqualToConfigurationScheduleDay:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 weekday:(unsigned long long)arg3;

@end
