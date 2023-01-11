//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface WFColoredDotButton : UIButton
{
    UIColor *_dotColor;
    UIView *_dotView;
}

@property(nonatomic) __weak UIView *dotView; // @synthesize dotView=_dotView;
@property(copy, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets)contentEdgeInsets;

@end
