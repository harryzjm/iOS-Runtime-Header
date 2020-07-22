//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding>
{
    NSMutableDictionary *_clock;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)shortDescription;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)minusVectorTimestamp:(id)arg1;
- (unsigned long long)compare:(id)arg1;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)removeUUID:(id)arg1;
- (void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)incrementClockForUUID:(id)arg1;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)subclockForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (id)timestampForReplica:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeIntoProtobufTimestamp:(VectorTimestamp_c98372c7 *)arg1 coder:(id)arg2;
- (id)initWithProtobufTimestamp:(const VectorTimestamp_c98372c7 *)arg1 decoder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

