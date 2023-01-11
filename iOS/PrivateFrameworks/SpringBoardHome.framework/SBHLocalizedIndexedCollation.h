//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILocalizedIndexedCollation.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet;

@interface SBHLocalizedIndexedCollation : UILocalizedIndexedCollation
{
    UILocalizedIndexedCollation *_referenceIndexedCollation;
    NSMutableOrderedSet *_appendedSections;
    NSMutableArray *_cachedSectionTitles;
    NSMutableArray *_cachedSectionIndexTitles;
}

+ (id)defaultCollation;
+ (id)defaultDimSumCollation;
- (void).cxx_destruct;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (_Bool)removeSection:(id)arg1;
- (_Bool)addSection:(id)arg1;
- (_Bool)containsSection:(id)arg1;
@property(readonly, nonatomic) NSArray *appendedSectionTitles;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
