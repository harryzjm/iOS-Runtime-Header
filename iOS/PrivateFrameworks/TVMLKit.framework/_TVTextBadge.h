//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _TVTextBadge : UIView
{
    NSAttributedString *_text;
    NSString *_type;
    UIColor *_tintColor;
    double _cornerRadius;
    double _lineWidth;
}

+ (id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
