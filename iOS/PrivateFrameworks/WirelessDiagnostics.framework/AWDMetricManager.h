//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AWDMetricManager : NSObject
{
}

+ (void)postMetricWithId:(unsigned long long)arg1 object:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 numberValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 stringValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 unsignedIntegerValue:(unsigned long long)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 boolValue:(_Bool)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1;

@end
