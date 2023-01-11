//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;
@protocol PXSampleGadgetViewDelegate;

@interface PXSampleGadgetView : UICollectionViewCell
{
    UIColor *_color;
    id <PXSampleGadgetViewDelegate> _delegate;
    UIView *_colorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) __weak id <PXSampleGadgetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
