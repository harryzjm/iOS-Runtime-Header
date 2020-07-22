//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNAnnouncementPlan, MNAnnouncementPlanEvent, NSArray;

@protocol MNAnnoucementStrategy
- (MNAnnouncementPlanEvent *)nextEvent;
- (MNAnnouncementPlan *)plan;
- (void)planForEvents:(NSArray *)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(MNAnnouncementPlanEvent *)arg4 timeSinceLastEvent:(double)arg5;
@end

