//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMPresenceEvent;

@interface HFPresenceCondition
{
    HMPresenceEvent *_presenceEvent;
}

@property(retain, nonatomic) HMPresenceEvent *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
- (void).cxx_destruct;
- (id)initWithPresenceEvent:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
