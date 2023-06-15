//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDateTimeItemView
{
    _Bool _useCustomFadeAnimation;
    NSString *_dateTimeString;
}

+ (const char *)_cStringFromData:(CDStruct_aa1ce654 *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dateTimeString; // @synthesize dateTimeString=_dateTimeString;
@property(nonatomic) _Bool useCustomFadeAnimation; // @synthesize useCustomFadeAnimation=_useCustomFadeAnimation;
- (id)accessibilityHUDRepresentation;
- (double)extraRightPadding;
- (void)setFrame:(struct CGRect)arg1;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (long long)textStyle;
- (id)contentsImage;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (_Bool)shouldTintContentImage;

@end

