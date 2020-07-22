//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView;

@interface VideosExtrasCollectionReusableView : UICollectionReusableView
{
    UILabel *_textLabel;
    MPUContentSizeLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textLeftConstraint;
    MPUContentSizeLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_textRightConstraint;
    struct UIEdgeInsets _labelInsets;
    UIView *_borderView;
    NSArray *_borderConstraints;
}

- (void).cxx_destruct;
- (void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2;
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
