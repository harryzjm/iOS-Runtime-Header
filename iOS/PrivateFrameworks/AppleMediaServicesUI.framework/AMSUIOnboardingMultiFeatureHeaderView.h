//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView
{
    _Bool _isPresentedInFormSheet;
    UILabel *_titleLabel;
    double _containerHeight;
    NSArray *_featureViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(nonatomic) _Bool isPresentedInFormSheet; // @synthesize isPresentedInFormSheet=_isPresentedInFormSheet;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)adjustedContentInsetDidChange;
- (void)layoutSubviews;
- (id)initWithFeatures:(id)arg1;

@end

