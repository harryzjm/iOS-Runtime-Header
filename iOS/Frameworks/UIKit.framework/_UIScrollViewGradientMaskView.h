//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIScrollViewGradientMaskView
{
    long long _gradientDirection;
    struct UIEdgeInsets _gradientStartInsets;
    struct UIEdgeInsets _gradientEndInsets;
    struct UIEdgeInsets _gradientIntensities;
}

+ (Class)layerClass;
@property(nonatomic) long long gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property(nonatomic) struct UIEdgeInsets gradientIntensities; // @synthesize gradientIntensities=_gradientIntensities;
@property(nonatomic) struct UIEdgeInsets gradientEndInsets; // @synthesize gradientEndInsets=_gradientEndInsets;
@property(nonatomic) struct UIEdgeInsets gradientStartInsets; // @synthesize gradientStartInsets=_gradientStartInsets;
- (void)updateWithFrame:(struct CGRect)arg1 gradientStartInsets:(struct UIEdgeInsets)arg2 gradientEndInsets:(struct UIEdgeInsets)arg3 gradientIntensities:(struct UIEdgeInsets)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)gradientLayer;

@end

