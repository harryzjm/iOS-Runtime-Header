//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTEvent.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@interface RTEventStark : RTEvent <NSSecureCoding>
{
    long long _starkState;
}

+ (id)stringFromStarkState:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long starkState; // @synthesize starkState=_starkState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceStarkState:(long long)arg1 source:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

