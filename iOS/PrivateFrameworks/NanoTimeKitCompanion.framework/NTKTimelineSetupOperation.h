//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKComplicationTimelineEntry, NSDate;

@interface NTKTimelineSetupOperation
{
    unsigned long long _directions;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _privacyBehavior;
    unsigned long long _timelineAnimationBehavior;
    CLKComplicationTimelineEntry *_currentEntry;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_invokeHandler;
- (void)_getCurrentEntry;
- (void)_getTimelineAnimationBehavior;
- (void)_getPrivacyBehavior;
- (void)_getEndDate;
- (void)_getStartDate;
- (void)_getTimeTravelDirections;
- (void)_cancel;
- (void)_start;

@end

