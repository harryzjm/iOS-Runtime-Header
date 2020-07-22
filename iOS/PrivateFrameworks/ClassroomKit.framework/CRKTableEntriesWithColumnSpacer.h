//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSString;
@protocol CRKTableEntries, CRKTableEntry;

@interface CRKTableEntriesWithColumnSpacer : NSObject <CRKTableEntries>
{
    id <CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    id <CRKTableEntry> mSpacerEntry;
}

- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 spacerEntry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

