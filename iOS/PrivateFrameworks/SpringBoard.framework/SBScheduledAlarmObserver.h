//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject
{
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateAlarmStatusBarItem;
- (void)_nextAlarmChanged:(id)arg1;
- (id)init;

@end
