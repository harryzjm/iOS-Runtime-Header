//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMDPerf : NSObject
{
}

+ (void)logWithLevel:(int)arg1 andFormat:(id)arg2;
+ (void)sampleForKey:(id)arg1;
+ (id)generatePerformanceDict;
+ (void)endMonitoringEvent:(id)arg1;
+ (void)startMonitoringEvent:(id)arg1;
+ (void)setVerbosity:(BOOL)arg1;
+ (void)enable:(_Bool)arg1;
+ (id)getContainer;
+ (void)provision;

@end
