//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSOrderedSet, NSString, NSUUID;
@protocol _UIDataSourceSnapshotTranslating;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceState : NSObject <NSCopying>
{
    NSUUID *_generationID;
    id <_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    NSOrderedSet *_guaranteedPerformanceIdentifiers;
    NSOrderedSet *_guaranteedPerformanceSections;
    unsigned long long _identifierLookupCount;
    unsigned long long _sectionLookupCount;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (long long)indexForSectionIdentifier:(id)arg1;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (_Bool)containsSectionIdentifier:(id)arg1;
- (_Bool)containsItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
- (id)itemIdentifiers;
- (id)sectionIdentifiers;
- (long long)numberOfSections;
- (long long)numberOfItems;
@property(readonly, nonatomic) id <_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property(readonly, nonatomic) NSOrderedSet *sections;
@property(readonly, nonatomic) NSOrderedSet *identifiers;
@property(readonly, nonatomic) NSUUID *generationID;
@property(readonly, copy) NSString *description;
- (void)willBecomeWiredToDataSource;
@property(readonly, nonatomic) NSOrderedSet *guaranteedPerformanceSections;
@property(readonly, nonatomic) NSOrderedSet *guaranteedPerformanceIdentifiers;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;
- (void)validateIdentifiers;
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4 identifiersHaveGuaranteedPerformance:(_Bool)arg5 sectionsHaveGuaranteedPerformance:(_Bool)arg6;
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4;
- (id)initWithStateAdvancingGenerationID:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

