//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/QLPreviewControllerConformingDelegate-Protocol.h>
#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class NSString;

@interface CKPhotosSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>
{
    unsigned long long _contentMode;
}

+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)relativeDateFormatter;
+ (id)sectionTitle;
+ (_Bool)supportsQuicklookForResult:(id)arg1;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (void)saveAttachmentForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)fractionalWidth:(double *)arg1 count:(unsigned long long *)arg2 forLayoutWidth:(unsigned long long)arg3;
- (void)_filterControlTapped:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (Class)headerOverrideClass;
- (_Bool)wantsHeaderSection;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (double)interGroupSpacing;
- (double)_internalInterGroupSpacing;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)sectionSubtitle;
- (id)queryResultsForItems:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)filterQueries;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;
- (id)initWithSectionIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
