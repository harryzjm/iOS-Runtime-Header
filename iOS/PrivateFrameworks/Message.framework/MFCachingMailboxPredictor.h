//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMailboxPredictor-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;
@protocol MFMailboxPredictor;

@interface MFCachingMailboxPredictor : NSObject <MFMailboxPredictor>
{
    id <MFMailboxPredictor> _predictor;
    NSCache *_cache;
    NSMutableDictionary *_cacheKeysByProperty;
}

@property(retain, nonatomic) NSMutableDictionary *cacheKeysByProperty; // @synthesize cacheKeysByProperty=_cacheKeysByProperty;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <MFMailboxPredictor> predictor; // @synthesize predictor=_predictor;
- (id)_propertyKeysForMessage:(id)arg1;
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;
- (id)_cacheKeyForMessages:(id)arg1;
- (void)removeAllPredictions;
- (void)invalidatePredictionsAffectedByMessages:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (void)dealloc;
- (id)initWithPredictor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

