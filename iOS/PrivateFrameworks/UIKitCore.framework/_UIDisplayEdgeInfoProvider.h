//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDisplayEdgeInfoProviding-Protocol.h>

@class NSString, UISApplicationSupportDisplayEdgeInfo;

__attribute__((visibility("hidden")))
@interface _UIDisplayEdgeInfoProvider : NSObject <_UIDisplayEdgeInfoProviding>
{
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;
}

+ (id)nullDisplayEdgeInfoProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) double systemMinimumMargin;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property(readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
- (id)initWithDisplayEdgeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
