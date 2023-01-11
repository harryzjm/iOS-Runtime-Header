//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PXViewLayoutHelper, UIImageView, UILabel;

@interface PXCMMTranscriptBubbleFooterView : UIView
{
    PXViewLayoutHelper *_layoutHelper;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronImageView;
}

+ (double)desiredHeight;
+ (double)_secondaryBaselineToBottomSpacing;
+ (double)_primaryToSecondaryBaselineSpacing;
+ (double)_topToPrimaryBaselineSpacing;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primaryText;
@property(nonatomic) _Bool chevronIsHidden;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

