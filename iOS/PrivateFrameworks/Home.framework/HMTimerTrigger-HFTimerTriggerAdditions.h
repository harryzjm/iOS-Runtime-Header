//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTimerTrigger.h>

#import <Home/HFTriggerProtocol-Protocol.h>

@class NSString;

@interface HMTimerTrigger (HFTimerTriggerAdditions) <HFTriggerProtocol>
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
- (unsigned long long)hf_triggerType;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
