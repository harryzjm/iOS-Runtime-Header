//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface XCTActivityRecordStack : NSObject
{
    NSMutableArray *_storage;
    NSMutableDictionary *_aggregationRecords;
}

@property(readonly) NSDictionary *aggregationRecords; // @synthesize aggregationRecords=_aggregationRecords;
- (id)topActivity;
- (long long)depth;
- (void)unwindRemainingActivitiesWithTestCase:(id)arg1 observationCenter:(id)arg2;
- (void)didFinishActivity:(id)arg1 testCase:(id)arg2 observationCenter:(id)arg3;
- (id)willStartActivityWithTitle:(id)arg1 type:(id)arg2 testCase:(id)arg3 observationCenter:(id)arg4;
- (void)dealloc;
- (id)init;

@end
