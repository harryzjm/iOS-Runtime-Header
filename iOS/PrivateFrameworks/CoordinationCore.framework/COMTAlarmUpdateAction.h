//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarm;

__attribute__((visibility("hidden")))
@interface COMTAlarmUpdateAction
{
    MTAlarm *_alarm;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAlarm:(id)arg1;

@end

