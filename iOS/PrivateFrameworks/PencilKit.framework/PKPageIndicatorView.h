//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface PKPageIndicatorView : UIView
{
    long long _numberOfPages;
    long long _currentPage;
    unsigned long long _circleWidth;
    unsigned long long _circleSpacing;
}

@property(nonatomic) unsigned long long circleSpacing; // @synthesize circleSpacing=_circleSpacing;
@property(nonatomic) unsigned long long circleWidth; // @synthesize circleWidth=_circleWidth;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

