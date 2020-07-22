//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface UICheckeredPatternView
{
    UIColor *_patternColor;
    double _scale;
    UIColor *_checkerColor;
}

@property(retain, nonatomic) UIColor *checkerColor; // @synthesize checkerColor=_checkerColor;
- (void).cxx_destruct;
- (void)updatePatternColor;
- (void)didMoveToWindow;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

