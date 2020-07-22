//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class IBUITraitCollection, NSMutableSet, NSSet, NSString;

@interface IBUIRelationshipTraitStorageRecord : NSObject <IBBinaryArchiving>
{
    NSMutableSet *_addedObjectIDs;
    NSMutableSet *_removedObjectIDs;
    IBUITraitCollection *_traitCollection;
}

@property(readonly, copy, nonatomic) NSSet *removedObjectIDs; // @synthesize removedObjectIDs=_removedObjectIDs;
@property(readonly, copy, nonatomic) NSSet *addedObjectIDs; // @synthesize addedObjectIDs=_addedObjectIDs;
@property(readonly, copy, nonatomic) IBUITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)removeObjectIDs:(id)arg1;
- (void)addObjectIDs:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 addedObjectIDs:(id)arg2 removedObjectIDs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

