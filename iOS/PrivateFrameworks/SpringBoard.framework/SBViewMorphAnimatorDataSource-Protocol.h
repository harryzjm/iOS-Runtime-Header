//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBViewMorphAnimator;

@protocol SBViewMorphAnimatorDataSource <NSObject>
- (double)targetFinalCornerRadiusForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect)targetFinalFrameForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect)sourceContentFrameForAnimator:(SBViewMorphAnimator *)arg1;
@end
