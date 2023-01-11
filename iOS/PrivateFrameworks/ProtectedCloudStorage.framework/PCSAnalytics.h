//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
{
}

+ (id)logger;
+ (id)databasePath;
- (id)dateOfLastSuccessForEvent:(struct NSString *)arg1;
- (void)noteEvent:(struct NSString *)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)logRecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(struct NSString *)arg1;

@end

