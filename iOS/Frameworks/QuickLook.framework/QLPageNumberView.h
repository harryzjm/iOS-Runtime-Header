//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSNumberFormatter, UILabel;

__attribute__((visibility("hidden")))
@interface QLPageNumberView : UIView
{
    long long _pageNumber;
    long long _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPath *)_copyMutablePathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2 inverted:(_Bool)arg3;
- (void)layoutSubviews;
- (void)sizeToFit;
@property long long pageCount;
@property long long pageNumber;
- (void)_updateString;
- (id)_indexFormatter;
- (id)initWithFrame:(struct CGRect)arg1;

@end

