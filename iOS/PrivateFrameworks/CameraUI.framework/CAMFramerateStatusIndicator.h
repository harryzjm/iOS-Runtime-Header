//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMFramerateIndicatorView;

@interface CAMFramerateStatusIndicator
{
    CAMFramerateIndicatorView *__framerateIndicatorView;
}

@property(readonly, nonatomic) CAMFramerateIndicatorView *_framerateIndicatorView; // @synthesize _framerateIndicatorView=__framerateIndicatorView;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseOutline;
@property(nonatomic) long long style;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)init;

@end
