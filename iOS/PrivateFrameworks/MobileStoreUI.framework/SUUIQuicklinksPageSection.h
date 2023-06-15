//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSString, SUUIQuicklinksPageComponent, SUUIQuicklinksViewController;

__attribute__((visibility("hidden")))
@interface SUUIQuicklinksPageSection : SUUIStorePageSection
{
    SUUIQuicklinksViewController *_quicklinksViewController;
}

- (void).cxx_destruct;
- (id)_quicklinksViewController;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIQuicklinksPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

