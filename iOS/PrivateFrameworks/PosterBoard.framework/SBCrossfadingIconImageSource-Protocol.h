//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class UIView;

@protocol SBCrossfadingIconImageSource <NSObject>
@property(nonatomic) _Bool showsSquareCorners;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (UIView *)sourceView;

@optional
- (UIView *)sourceBackgroundView:(UIView *)arg1;
@end

