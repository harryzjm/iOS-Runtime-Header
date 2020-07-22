//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject
{
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}

- (id)description;
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long *)arg2 nameIndex:(unsigned long long *)arg3;
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2;
- (_Bool)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long *)arg2 lastSheetIndex:(unsigned long long *)arg3;
- (unsigned long long)addReference:(id)arg1;
- (unsigned long long)indexOfReference:(id)arg1;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1;
- (unsigned long long)addLink:(id)arg1;
- (unsigned long long)indexOfFirstLinkWithType:(int)arg1;
- (id)linkAtIndex:(unsigned long long)arg1;
- (unsigned long long)linksCount;
- (void)dealloc;
- (id)init;

@end

