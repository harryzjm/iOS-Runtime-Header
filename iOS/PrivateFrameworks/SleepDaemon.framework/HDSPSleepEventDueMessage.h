//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSPSleepEvent;

__attribute__((visibility("hidden")))
@interface HDSPSleepEventDueMessage
{
    HKSPSleepEvent *_event;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKSPSleepEvent *event; // @synthesize event=_event;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)messageType;
- (id)initWithEvent:(id)arg1 syncAnchor:(id)arg2;

@end
