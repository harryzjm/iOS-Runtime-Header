//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewPropertyAnimator.h>

@class UICubicTimingParameters, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator
{
}

+ (id)springAnimation;
+ (id)init;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;
- (id)initWithCoder:(id)arg1;
- (id)commonInit;

@end

