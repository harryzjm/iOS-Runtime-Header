//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKApplyHeroCardView : UIView
{
    UIImageView *_cardImageView;
    UIView *_cardImageShadowView;
    _Bool _usesCompactLayout;
    unsigned long long _featureIdentifier;
    double _cardHeight;
    double _cardTopPadding;
    double _cardBottomPadding;
    double _cardBackingHeight;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;

@end
