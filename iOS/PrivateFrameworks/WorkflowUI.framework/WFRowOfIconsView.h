//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIStackView;

@interface WFRowOfIconsView : UIView
{
    UIStackView *_stackView;
    NSArray *_iconViews;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSArray *iconViews; // @synthesize iconViews=_iconViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)setIcons:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2;

@end
