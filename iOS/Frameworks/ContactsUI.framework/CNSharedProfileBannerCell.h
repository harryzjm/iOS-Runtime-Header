//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class CNSharedProfileBannerView;
@protocol CNSharedProfileBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CNSharedProfileBannerCell : CNContactCell
{
    id <CNSharedProfileBannerViewDelegate> _delegate;
    CNSharedProfileBannerView *_sharedProfileBannerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNSharedProfileBannerView *sharedProfileBannerContentView; // @synthesize sharedProfileBannerContentView=_sharedProfileBannerContentView;
@property(nonatomic) __weak id <CNSharedProfileBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setUpWithSharedProfileStateOracle:(id)arg1 tappedAction:(unsigned long long)arg2 hasPerformedAnimation:(_Bool)arg3;
- (double)minCellHeight;
- (void)updateConstraints;
- (id)variableConstraints;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setUpView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

