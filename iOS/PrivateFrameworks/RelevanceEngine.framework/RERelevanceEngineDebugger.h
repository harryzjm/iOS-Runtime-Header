//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, REObserverStore;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger
{
    REObserverStore *_observerStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_unregisterEngine:(id)arg1;
- (void)_registerEngine:(id)arg1;
- (id)orderedElementsForEngine:(id)arg1;
- (id)allRelevanceProviderValuesForEngine:(id)arg1;
- (id)dataSourceElementsForEngine:(id)arg1;
- (void)reloadDataSourceForEngine:(id)arg1;
- (id)diagnosticLogsForEngine:(id)arg1;
- (_Bool)_isValidEngine:(id)arg1;
- (id)firstEngine;
- (id)engineWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *availableEngines;
- (id)init;

@end

