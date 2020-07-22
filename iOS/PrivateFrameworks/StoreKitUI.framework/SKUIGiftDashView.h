//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView
{
    UIColor *_dashColor;
    struct CGSize _dashSize;
    double _dashSpacing;
}

@property(nonatomic) double dashSpacing; // @synthesize dashSpacing=_dashSpacing;
@property(nonatomic) struct CGSize dashSize; // @synthesize dashSize=_dashSize;
@property(copy, nonatomic) UIColor *dashColor; // @synthesize dashColor=_dashColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
