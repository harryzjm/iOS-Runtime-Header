//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface ICDocCamToolbarFilterButton : UIButton
{
    _Bool _compact;
    _Bool _myHighlighted;
    CAShapeLayer *_maskLayer;
    struct CGRect _currentBounds;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool myHighlighted; // @synthesize myHighlighted=_myHighlighted;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
- (void).cxx_destruct;
- (id)preferredTintColor;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)postButtonWithTypeInit;
- (void)setDarkenedTintColor:(id)arg1;
- (id)darkenedTintColor;
- (void)setDefaultTintColor:(id)arg1;
- (id)defaultTintColor;

@end

