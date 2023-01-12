//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, _EXDiscoveryController, _EXQuery;

__attribute__((visibility("hidden")))
@interface _EXActiveQuery : NSObject
{
    _EXQuery *_query;
    NSMutableSet *_internalObservers;
    NSMutableSet *_internalNewObservers;
    _EXDiscoveryController *_discoveryController;
    NSSet *_currentUUIDs;
}

- (void).cxx_destruct;
@property(retain) NSSet *currentUUIDs; // @synthesize currentUUIDs=_currentUUIDs;
@property(readonly) __weak _EXDiscoveryController *discoveryController; // @synthesize discoveryController=_discoveryController;
@property(readonly) NSMutableSet *internalNewObservers; // @synthesize internalNewObservers=_internalNewObservers;
@property(readonly) NSMutableSet *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(readonly) _EXQuery *query; // @synthesize query=_query;
- (id)description;
- (void)update;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) NSSet *observers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToActiveQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 discoveryController:(id)arg2;

@end

