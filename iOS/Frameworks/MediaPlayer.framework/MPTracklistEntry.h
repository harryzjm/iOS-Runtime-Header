//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPTracklistEnumerationResult-Protocol.h>

@class MPTracklistEntryPositionKey, NSMutableArray, NSString;

@interface MPTracklistEntry : NSObject <MPTracklistEnumerationResult>
{
    _Bool _dataSourceRemoved;
    MPTracklistEntryPositionKey *_positionKey;
    NSString *_sectionIdentifier;
    NSMutableArray *_nextEntries;
    MPTracklistEntry *_previousEntry;
    long long _branchDepth;
}

@property(nonatomic) long long branchDepth; // @synthesize branchDepth=_branchDepth;
@property(nonatomic) __weak MPTracklistEntry *previousEntry; // @synthesize previousEntry=_previousEntry;
@property(readonly, nonatomic) NSMutableArray *nextEntries; // @synthesize nextEntries=_nextEntries;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) MPTracklistEntryPositionKey *positionKey; // @synthesize positionKey=_positionKey;
@property(readonly, nonatomic, getter=isDataSourceRemoved) _Bool dataSourceRemoved; // @synthesize dataSourceRemoved=_dataSourceRemoved;
- (void).cxx_destruct;
- (void)setDataSourceRemoved;
- (void)addBranch:(id)arg1;
- (id)trackingEntryResult;
- (id)itemResult;
@property(readonly, nonatomic) long long entryType;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
