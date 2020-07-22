//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HULinkedApplicationRatingView, NSArray, NSString, NSURL, UIButton, UIImageView, UILabel;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationView : UIView <HUCellProtocol>
{
    _Bool _isInstalled;
    HFItem *_item;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    HULinkedApplicationRatingView *_ratingView;
    UILabel *_priceLabel;
    UILabel *_installedLabel;
    UIButton *_viewButton;
    NSString *_bundleID;
    NSURL *_storeURL;
    NSArray *_currentConstraints;
}

@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UILabel *installedLabel; // @synthesize installedLabel=_installedLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) HULinkedApplicationRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_viewButtonTapped:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
