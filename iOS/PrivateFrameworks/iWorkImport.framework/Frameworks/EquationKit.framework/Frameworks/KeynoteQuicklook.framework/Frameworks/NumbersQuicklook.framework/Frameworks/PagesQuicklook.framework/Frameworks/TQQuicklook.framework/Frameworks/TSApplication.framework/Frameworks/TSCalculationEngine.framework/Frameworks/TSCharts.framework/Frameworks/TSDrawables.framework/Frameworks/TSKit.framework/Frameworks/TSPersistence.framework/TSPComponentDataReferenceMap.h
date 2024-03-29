//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, _TtC13TSPersistence15TSPReferenceMap;

@interface TSPComponentDataReferenceMap : NSObject
{
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence15TSPReferenceMap *_objectToDataReferenceMap;
    NSIndexSet *_objectIdentifiersWithoutUUID;
}

- (void).cxx_destruct;
- (id)description;
- (void)saveToMessage:(void *)arg1;
@property(readonly, nonatomic) NSIndexSet *objectIdentifiersWithoutUUID;
@property(readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *objectToDataReferenceMap;
@property(readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *dataToObjectReferenceMap;
@property(readonly, nonatomic) unsigned long long objectCount;
@property(readonly, nonatomic) unsigned long long dataCount;
- (id)initFromMessage:(const void *)arg1 componentObjectUUIDMap:(id)arg2 needsUpgrade:(_Bool *)arg3;
- (id)initWithDataToObjectReferenceMap:(id)arg1 objectToDataReferenceMap:(id)arg2 objectIdentifiersWithoutUUID:(id)arg3;
- (id)init;

@end

