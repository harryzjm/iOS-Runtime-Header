//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKVOBlockHelper : NSObject
{
    id _observedObject;
    NSMutableDictionary *_tokensByContext;
    long long _nextIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) long long nextIdentifier; // @synthesize nextIdentifier=_nextIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *tokensByContext; // @synthesize tokensByContext=_tokensByContext;
@property(readonly, nonatomic) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)insertNewTokenForKeyPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeHandlerForKey:(id)arg1;
- (id)allKVOObservers;
- (void)dump;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
