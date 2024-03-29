//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKColoredBalloonView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMomentShareStatusBalloonView : CKColoredBalloonView
{
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

+ (id)_secondaryLabelString;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void).cxx_destruct;
- (BOOL)color;
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

