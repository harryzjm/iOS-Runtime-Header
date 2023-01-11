//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSArray, NSDictionary, NSString, REObserverStore, RERelevanceEngine;

@interface REPredictorManager : NSObject <REPredictorObserver>
{
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}

- (void).cxx_destruct;
- (void)predictorDidUpdate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)pause;
- (void)resume;
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

