//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/CREquatable-Protocol.h>
#import <NotesShared/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding>
{
    NSUUID *_replica;
    long long _counter;
}

@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (void).cxx_destruct;
- (id)shortDescription;
@property(readonly, copy) NSString *description;
- (id)laterTimestamp:(id)arg1;
- (id)earlierTimestamp:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTimestamp:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)nextTimestamp;
- (id)nextTimestampForReplica:(id)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReplica:(id)arg1 andCounter:(long long)arg2;
- (void)encodeIntoProtobufTimestamp:(struct Timestamp *)arg1 coder:(id)arg2;
- (id)initWithProtobufTimestamp:(const struct Timestamp *)arg1 decoder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

