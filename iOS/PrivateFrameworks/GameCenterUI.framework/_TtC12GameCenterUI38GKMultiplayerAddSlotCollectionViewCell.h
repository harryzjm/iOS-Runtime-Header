//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, UIButton;

@interface _TtC12GameCenterUI38GKMultiplayerAddSlotCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *contentBackgroundView;
    MISSING_TYPE *addSlotButton;
    MISSING_TYPE *vibrancyHost;
    MISSING_TYPE *focusGuide;
    MISSING_TYPE *addSlotActionHandler;
    MISSING_TYPE *maximumAdditionalPlayers;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, readonly) UIButton *accessibilityAddSlotButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
@property(nonatomic) long long maximumAdditionalPlayers; // @synthesize maximumAdditionalPlayers;
@property(nonatomic, copy) CDUnknownBlockType addSlotActionHandler;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
