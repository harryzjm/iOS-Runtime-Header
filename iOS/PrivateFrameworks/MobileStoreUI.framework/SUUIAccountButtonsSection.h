//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSString, SUUIAccountButtonsComponent, SUUIAccountButtonsViewController;

__attribute__((visibility("hidden")))
@interface SUUIAccountButtonsSection : SUUIStorePageSection
{
    SUUIAccountButtonsViewController *_accountButtonsViewController;
}

- (void).cxx_destruct;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIAccountButtonsComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

