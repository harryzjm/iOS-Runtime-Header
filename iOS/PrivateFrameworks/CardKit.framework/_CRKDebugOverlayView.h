//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UILabel;

@interface _CRKDebugOverlayView
{
    UILabel *_label;
    UIColor *_color;
    NSString *_debugText;
}

@property(copy, nonatomic) NSString *debugText; // @synthesize debugText=_debugText;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

