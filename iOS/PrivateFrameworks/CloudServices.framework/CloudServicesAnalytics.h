//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/SFAnalytics.h>

@interface CloudServicesAnalytics : SFAnalytics
{
}

+ (id)logger;
+ (id)databasePath;
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(id)arg1;

@end

