//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSPredicateValueNormalizer-Protocol.h>

@class CLSDataStore, NSArray, NSPredicate, NSString;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable>
{
    _Bool _invalidated;
    Class _objectType;
    NSString *_observerID;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _dataChanged;
    CLSDataStore *_dataStore;
    unsigned long long _changeTag;
}

+ (id)predicateForObjectsWithParentObjectID:(id)arg1 andRole:(unsigned long long)arg2;
+ (id)predicateForObjectsWithPersonID:(id)arg1 andRole:(unsigned long long)arg2;
+ (id)predicateForObjectsWithIdentifier:(id)arg1;
+ (id)predicateForObjectsWithParentObjectID:(id)arg1;
+ (id)predicateForObjectsWithObjectIDs:(id)arg1;
+ (id)predicateForObjectWithObjectID:(id)arg1;
@property unsigned long long changeTag; // @synthesize changeTag=_changeTag;
@property(nonatomic) __weak CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(copy, nonatomic) CDUnknownBlockType dataChanged; // @synthesize dataChanged=_dataChanged;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *observerID; // @synthesize observerID=_observerID;
@property(getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) Class objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (id)normalizedValue:(id)arg1 forKeyPath:(id)arg2;
- (id)normalizeKeyPath:(id)arg1 forValue:(id)arg2;
@property(readonly, copy) NSString *description;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (oneway void)clientRemote_invalidate;
- (void)reset;
@property(readonly, nonatomic) NSString *className;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

