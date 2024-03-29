//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMLocationEvent.h>

@class NSString;

@interface HMLocationEvent (HFAdditions)
+ (_Bool)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;
- (_Bool)hf_isRegionAtHome:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_eventType;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

