//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFFeedbackDataContainer;
@protocol OS_dispatch_queue, TFDataAggregatorDelegate;

__attribute__((visibility("hidden")))
@interface TFDataAggregator : NSObject
{
    TFFeedbackDataContainer *_sessionDataContainer;
    id <TFDataAggregatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_aggregationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *aggregationQueue; // @synthesize aggregationQueue=_aggregationQueue;
@property(nonatomic) __weak id <TFDataAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFFeedbackDataContainer *sessionDataContainer; // @synthesize sessionDataContainer=_sessionDataContainer;
- (void)_validateProvidedIdentifiersForTasks:(id)arg1;
- (id)_loadAndExtractDataForTasks:(id)arg1 intoDataContainer:(id)arg2;
- (void)_finishUpdatingDataContainer:(id)arg1 byMergingDataContainer:(id)arg2 forTasks:(id)arg3;
- (void)_prepareDestinationDataContainer:(id)arg1 forTasks:(id)arg2;
- (void)runTasks:(id)arg1;
- (id)initWithSessionDataContainer:(id)arg1;

@end

