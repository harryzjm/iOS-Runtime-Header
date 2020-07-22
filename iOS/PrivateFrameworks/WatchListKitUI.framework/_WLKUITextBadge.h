//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor;

@interface _WLKUITextBadge : UIView
{
    UIColor *_tintColor;
    double _cornerRadius;
    double _fontSize;
    NSString *_title;
    double _strokeSize;
    struct UIEdgeInsets _badgeInsets;
}

@property(nonatomic) struct UIEdgeInsets badgeInsets; // @synthesize badgeInsets=_badgeInsets;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedTitle;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;

@end

