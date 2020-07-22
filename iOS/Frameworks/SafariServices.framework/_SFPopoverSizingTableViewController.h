//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@interface _SFPopoverSizingTableViewController : UITableViewController
{
    _Bool _didUpdateTranslucentAppearanceAtLeastOnce;
    _Bool _didHaveTranslucentAppearance;
}

- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (void)updateTranslucentAppearance;
@property(readonly, nonatomic) _Bool hasTranslucentAppearance;
- (void)_updateTranslucentAppearanceIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (double)_totalContentHeightForPreferredContentSize;

@end

