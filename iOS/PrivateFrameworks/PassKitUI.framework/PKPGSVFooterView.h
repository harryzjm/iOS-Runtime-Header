//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton;
@protocol PKPGSVFooterViewDelegate;

@interface PKPGSVFooterView : UIView
{
    PKContinuousButton *_editButton;
    id <PKPGSVFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPGSVFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_editTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
