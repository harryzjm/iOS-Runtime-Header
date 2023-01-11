//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction
{
}

+ (id)userInterfaceXPCInterface;
+ (id)userInterfaceProtocol;
+ (id)calendarFromDescriptor:(id)arg1;
+ (id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2;
+ (id)eventFromParameters:(id)arg1 requiringFullySpecifiedEvent:(_Bool)arg2 error:(id *)arg3;
+ (double)relativeOffsetFromTimeString:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)initializeParameters;
- (void)updateForcesAllDayFlags;
- (id)targetContentAttribution;
- (id)currentSelectedCalendar;
- (void)runWithoutUI;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)updateCalendars;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;

@end
