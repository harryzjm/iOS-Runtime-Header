//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, TSPPersistedObjectUUIDMap, _TtC13TSPersistence23TSPMutableIdentifierSet;
@protocol OS_dispatch_queue, TSPObjectUUIDMapDelegate;

@interface TSPObjectUUIDMap : NSObject
{
    _Atomic int _assertOnReadCount;
    id <TSPObjectUUIDMapDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    _TtC13TSPersistence23TSPMutableIdentifierSet *_inMemoryObjectIdentifiers;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

- (void).cxx_destruct;
- (void)endAssertOnRead;
- (void)beginAssertOnRead;
- (void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(_Bool)arg2 validateNewObjects:(_Bool)arg3 identifier:(long long *)arg4;
- (_Bool)isAnyObjectIdentifierInDocument:(id)arg1;
- (_Bool)isObjectIdentifierInDocument:(long long)arg1;
- (_Bool)hasObjectUUID:(id)arg1;
- (void)objectWillBeRemovedFromDocument:(id)arg1;
- (void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2;
- (long long)objectIdentifierForUUID:(id)arg1;
- (_Bool)shouldSuppressAssertionForObjectUUID:(id)arg1;
- (void)setPersistedUUIDMap:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

