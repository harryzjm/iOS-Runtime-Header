//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditItem : EKEventEditItem
{
    long long _availability;
    NSArray *_choices;
}

- (void).cxx_destruct;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)_choices;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;

@end

