//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol PKPaymentSetupCategoriesSectionControllerDelegate;

@interface PKPaymentSetupCategoriesSectionController
{
    NSMutableDictionary *_sectionIdentifierToSectionTitleMapping;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifiersToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    struct CGSize _iconSize;
    unsigned long long _currentConfiguredRequirements;
    id <PKPaymentSetupCategoriesSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentSetupCategoriesSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_listItemForItemIdentifier:(id)arg1 paymentSetupProductModel:(id)arg2;
- (_Bool)updateWithRequirements:(unsigned long long)arg1 provisioningController:(id)arg2 paymentSetupProductModel:(id)arg3 displayLoadingIndicator:(_Bool *)arg4;
- (void)_updateItemIdentifier:(id)arg1 loadingIndicatorVisibility:(_Bool)arg2;
- (void)didSelectItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)identifiers;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;
- (id)init;

@end
