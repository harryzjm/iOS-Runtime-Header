//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUViewController;

@interface SURotationController : NSObject
{
    SUViewController *_viewController;
}

@property(nonatomic) SUViewController *viewController; // @synthesize viewController=_viewController;
- (struct CGRect)viewFrameForInterfaceOrientation:(long long)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)orientationAffectsViewFrame;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

