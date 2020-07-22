//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CRIndex : NSObject <NSCopying, CRDataType, CRCoding>
{
    NSArray *_indexPath;
}

+ (id)indexForReplica:(id)arg1 betweenIndex:(id)arg2 andIndex:(id)arg3;
+ (id)indexWithPath:(id)arg1;
@property(retain, nonatomic) NSArray *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)compare:(id)arg1;
- (id)indexAtDepth:(unsigned long long)arg1 withInteger:(long long)arg2 replica:(id)arg3;
- (id)previousIndexForReplica:(id)arg1;
- (id)nextIndexForReplica:(id)arg1;
- (unsigned long long)depth;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
