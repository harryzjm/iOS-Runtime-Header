//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSArray, NSString;

@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries>
{
    NSArray *mObjects;
    NSArray *mKeys;
}

- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

