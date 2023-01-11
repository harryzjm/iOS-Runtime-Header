//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/AVTTransitionModel-Protocol.h>

@class UIImage, UIView;

@protocol AVTSectionItemTransitionModel <AVTTransitionModel>
- (void)cleanupAfterTransition;
- (void)prepareForTransitionToImage:(UIImage *)arg1;
- (UIView *)toView;
- (UIView *)fromView;
@end
