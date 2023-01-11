//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFStatisticsEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_statisticsQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue; // @synthesize statisticsQueue=_statisticsQueue;
- (void)standardDeviationOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rangeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)medianOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)maximumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)minimumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)averageOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncApplyNSExpressionFunction:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOperation:(long long)arg1 onStatisticsSampleProviders:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOperation:(long long)arg1 onNumbers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
