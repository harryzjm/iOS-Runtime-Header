//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, UIButton, UILabel, UIPopoverController, UIView;

__attribute__((visibility("hidden")))
@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UIPopoverController *_sortPopoverController;
    long long _selectedSortIndex;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    NSArray *_sortTitles;
    UILabel *_titleLabel;
    UIButton *_writeAReviewButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *writeAReviewButton; // @synthesize writeAReviewButton=_writeAReviewButton;
@property(readonly, nonatomic) UIControl *appSupportButton; // @synthesize appSupportButton=_appSupportButton;
@property(copy, nonatomic) NSArray *sortTitles; // @synthesize sortTitles=_sortTitles;
@property(nonatomic) long long selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)_reloadSortButton;
- (void)_destroySortPopoverController;
- (void)_sortButtonAction:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
