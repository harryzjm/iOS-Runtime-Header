//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;
}

+ (id)instance;
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;
- (void)addSink:(id)arg1 withBehavior:(id)arg2;
- (void)dealloc;
- (id)init;

@end
