//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface NTKExplorerHandsView
{
    UIColor *_secondHandDotColor;
    struct CGPoint _secondHandCenter;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint secondHandCenter; // @synthesize secondHandCenter=_secondHandCenter;
@property(retain, nonatomic) UIColor *secondHandDotColor; // @synthesize secondHandDotColor=_secondHandDotColor;
- (void)layoutSubviews;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)setInlayColor:(id)arg1;
- (id)initForDevice:(id)arg1;

@end
