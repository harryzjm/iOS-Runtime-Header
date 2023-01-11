//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class MPSectionedIdentifierList, MPSectionedIdentifierListEntry, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListEnumerator : NSEnumerator
{
    MPSectionedIdentifierList *_sectionedIdentifierList;
    unsigned long long _options;
    NSMutableArray *_contexts;
    NSMutableArray *_nextEmittableEnumerationResults;
    MPSectionedIdentifierListEntry *_endEntry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPSectionedIdentifierListEntry *endEntry; // @synthesize endEntry=_endEntry;
@property(retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults; // @synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults;
@property(retain, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // @synthesize sectionedIdentifierList=_sectionedIdentifierList;
- (id)nextObject;
- (id)nextObjectWithExclusiveAccessToken:(id)arg1;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5;

@end
