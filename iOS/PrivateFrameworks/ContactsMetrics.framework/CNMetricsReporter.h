//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNMetricsReporter : NSObject
{
}

+ (void)logDatabaseResolution:(id)arg1;
+ (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(_Bool)arg3;
+ (void)sendDictionary:(id)arg1 forEvent:(id)arg2;
+ (id)log;
- (id)compoundKeyForEvent:(id)arg1;
- (id)eventKeyPrefix;
- (void)logSimpleEvent:(id)arg1 forApplication:(id)arg2 andLog:(_Bool)arg3;
- (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(_Bool)arg3;

@end
