//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRDataType-Protocol.h>

@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType>
{
    CRSet *_set;
    NSMapTable *_timestamps;
}

@property(retain, nonatomic) NSMapTable *timestamps; // @synthesize timestamps=_timestamps;
@property(retain, nonatomic) CRSet *set; // @synthesize set=_set;
- (void).cxx_destruct;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(retain, nonatomic) id contents;
- (void)addItem:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)timestampForNewItem;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

