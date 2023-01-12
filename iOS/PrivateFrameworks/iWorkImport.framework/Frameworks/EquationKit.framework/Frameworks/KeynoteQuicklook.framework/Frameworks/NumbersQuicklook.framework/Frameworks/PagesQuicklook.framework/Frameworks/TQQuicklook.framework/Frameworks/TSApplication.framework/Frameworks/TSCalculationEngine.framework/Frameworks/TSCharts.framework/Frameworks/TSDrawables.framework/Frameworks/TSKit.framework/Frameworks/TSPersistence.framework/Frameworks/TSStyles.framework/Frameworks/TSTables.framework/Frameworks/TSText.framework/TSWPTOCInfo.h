//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSWPShapeInfo.h"

@class NSArray, NSSet, NSString, TSWPTOCPartitioner, TSWPTOCSettings;

@interface TSWPTOCInfo : TSWPShapeInfo
{
    TSWPTOCPartitioner *_partitioner;
    _Bool _shouldSyncTOCSettingsWithTOCNavigator;
    NSArray *_tocEntries;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

+ (_Bool)canPartitionInline;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pageNumberRanges; // @synthesize pageNumberRanges=_pageNumberRanges;
@property(nonatomic) _Bool shouldSyncTOCSettingsWithTOCNavigator; // @synthesize shouldSyncTOCSettingsWithTOCNavigator=_shouldSyncTOCSettingsWithTOCNavigator;
@property(retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // @synthesize tocSettings=_tocSettings;
@property(retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // @synthesize tocEntries=_tocEntries;
- (id)textualEquivalent;
- (void)saveTOCInfoMessage:(void *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadTOCInfoMessage:(const void *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)supportsAttachedComments;
- (_Bool)supportsDropCapsInChildStorages;
- (void)acceptVisitor:(id)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)regenerateStorageContent;
- (void)resetStorageStyles;
- (_Bool)p_startingTOCIsRTLForEntries:(id)arg1;
- (id)containedStorageFormattedUsingParagraphStyles;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
@property(readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
- (void)i_setTOCSettings:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleTOCEntries;
- (void)i_setTOCEntries:(id)arg1;
- (id)partitioner;
- (_Bool)textIsVertical;
- (_Bool)allowsTitle;
- (_Bool)allowsCaption;
- (_Bool)wantsPositionFixedWhenCopying;
- (unsigned int)elementKind;
- (_Bool)isSelectable;
- (Class)editorClass;
- (Class)repClass;
- (id)copyWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

