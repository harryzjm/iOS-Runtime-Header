//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

__attribute__((visibility("hidden")))
@interface VUIContainerCollectionViewCell : UICollectionViewCell
{
    _Bool _pressIsAnimating;
    _Bool _unpressOnEndAnimating;
    _Bool _allowsFocus;
    _Bool _selectSubviews;
}

@property(nonatomic) _Bool selectSubviews; // @synthesize selectSubviews=_selectSubviews;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void)_showPressState;
- (void)_clearPressState;
- (void)prepareForReuse;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
