//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PSUIBadgeView : UIView
{
    UILabel *_badgeLabel;
    double _fontSize;
    double _cornerRadius;
    double _minPadding;
    double _baseline;
}

@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(nonatomic) double minPadding; // @synthesize minPadding=_minPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *text;
- (id)init;

@end
