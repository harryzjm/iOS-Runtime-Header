//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImage;

__attribute__((visibility("hidden")))
@interface MCLRatingsView : UIView
{
    double _imageaspect;
    NSLayoutConstraint *_widthConstraint;
    _Bool _actionVariant;
    double _spacing;
    double _value;
    UIImage *_emptyImage;
    UIImage *_fullImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool actionVariant; // @synthesize actionVariant=_actionVariant;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

