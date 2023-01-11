//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendar, NSDate, NSTimeZone;

@interface EKUIAutocompleteTracker : NSObject
{
    _Bool _hasTrackedZKWQuery;
    _Bool _hasTrackedZKWResultShown;
    _Bool _hasTrackedAutocompleteQuery;
    _Bool _hasTrackedAutocompleteResultsShown;
    _Bool _hasTrackedNLResultShown;
    _Bool _hasFinalizedTracking;
    _Bool _initialIsAllDay;
    unsigned long long _finalNumberOfAutocompleteResults;
    NSDate *_initialStartDate;
    NSDate *_initialEndDate;
    NSTimeZone *_initialTimeZone;
    EKCalendar *_initialCalendar;
}

+ (_Bool)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3;
+ (_Bool)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2;
+ (_Bool)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1;
+ (id)propertyName:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain) EKCalendar *initialCalendar; // @synthesize initialCalendar=_initialCalendar;
@property _Bool initialIsAllDay; // @synthesize initialIsAllDay=_initialIsAllDay;
@property(retain) NSTimeZone *initialTimeZone; // @synthesize initialTimeZone=_initialTimeZone;
@property(retain) NSDate *initialEndDate; // @synthesize initialEndDate=_initialEndDate;
@property(retain) NSDate *initialStartDate; // @synthesize initialStartDate=_initialStartDate;
@property unsigned long long finalNumberOfAutocompleteResults; // @synthesize finalNumberOfAutocompleteResults=_finalNumberOfAutocompleteResults;
- (_Bool)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2;
- (void)_augmentPayload:(id)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(_Bool)arg5;
- (void)finalizeAutocompleteTrackingOnSave:(_Bool)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(_Bool)arg5;
- (void)trackAutocompleteResultsShown;
- (void)trackAutocompleteQuery;
- (void)trackNLResultShown;
- (void)trackZKWResultShown;
- (void)trackZKWQuery;

@end
