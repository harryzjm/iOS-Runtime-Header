//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKSignificantTimeChangeLogger : NSObject
{
}

+ (id)sharedInstance;
+ (void)beginLogging;
- (void)_startObserving;
- (void)_logNotificationReceiptWithName:(id)arg1;
- (void)_handleNotification:(id)arg1;
- (id)init;

@end

