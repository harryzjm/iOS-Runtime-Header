//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPSAnalytics : NSObject
{
}

+ (id)sharedInstance;
- (void)navigationStartedWithBundleIdentifier:(id)arg1;
- (void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2;
@property(readonly, nonatomic) _Bool shouldRecordAnalyticsEvents;

@end
