//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CalPreferences, NSArray;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool alertInviteeDeclines;
@property(nonatomic) _Bool showDeclinedEvents;
@property(retain, nonatomic) NSArray *selectedCalendarIdentifiers;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(retain, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property(readonly) _Bool bypassSplashScreen;
@property(nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(nonatomic) _Bool remindMeAboutThisInCalendarWidgetEnabled;
@property(nonatomic) _Bool alwaysSetArrivedAndSettledForReminders;
@property(nonatomic) _Bool useShortReminderRefireInterval;
@property(nonatomic) _Bool useShortReminderSnoozeInterval;
@property(nonatomic) _Bool refiringReminderAlarmsEnabled;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;

@end

