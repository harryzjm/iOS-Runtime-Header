//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SBSwitcherLiveContentOverlay;

@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject
{
    long long _overlayType;
    id <SBSwitcherLiveContentOverlay> _overlay;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SBSwitcherLiveContentOverlay> overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
- (id)initWithOverlay:(id)arg1 overlayType:(long long)arg2;

@end
