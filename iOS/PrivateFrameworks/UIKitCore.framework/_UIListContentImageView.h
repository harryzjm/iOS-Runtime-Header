//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIListContentImageView : UIImageView
{
    _Bool _hadStroke;
    UIColor *_strokeColor;
    double _strokeWidth;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setStrokeWidth:) double _strokeWidth; // @synthesize _strokeWidth;
@property(retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor; // @synthesize _strokeColor;
- (void)_updateStroke;
- (void)_registerTraitChanges;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

