//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface HUColoredButton : UIButton
{
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property(nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;
@property(nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

