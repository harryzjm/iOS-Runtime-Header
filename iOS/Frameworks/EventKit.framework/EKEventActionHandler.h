//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EKEventActionHandler : NSObject
{
}

+ (id)_displayStringForDate:(id)arg1;
+ (id)_logHandle;
+ (id)sharedInstance;
- (id)createEventIntentForEvent:(id)arg1 withSuggestionsInfoUniqueKey:(id)arg2;
- (id)createEventIntentForEvent:(id)arg1;
- (void)donatePredictiveAction:(id)arg1 forEvent:(id)arg2;
- (void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2;
- (id)_intentForAction:(id)arg1 onEvent:(id)arg2;
- (void)removeInteractionsForCalendar:(id)arg1;
- (void)handleEventDeletion:(id)arg1;
- (void)handleEventUpdate:(id)arg1;
- (void)prepareForEventUpdate:(id)arg1;
- (void)handleEventCreation:(id)arg1;

@end
