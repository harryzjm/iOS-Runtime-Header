//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class _UIActionSlider;

@protocol _UIActionSliderDelegate <NSObject>

@optional
- (void)actionSliderDidCancelSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(_UIActionSlider *)arg1;
- (void)actionSlider:(_UIActionSlider *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(_UIActionSlider *)arg1;
@end

