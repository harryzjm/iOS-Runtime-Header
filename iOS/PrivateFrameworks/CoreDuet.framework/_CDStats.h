//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDStats : NSObject
{
}

+ (id)familyNames;
+ (id)hardwareModel;
+ (id)sharedInstance;
- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (id)dictionary;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (id)string;
- (void)dealloc;
- (id)init;

@end

