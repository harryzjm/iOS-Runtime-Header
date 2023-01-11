//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBAppSwitcherPageContentView <NSObject>
@property(nonatomic, getter=isVisible) _Bool visible;
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) _Bool contentRequiresGroupOpacity;
@property(nonatomic) long long orientation;
@property(nonatomic) double cornerRadius;
- (void)invalidate;

@optional
- (void)setShowingIconOverlayView:(_Bool)arg1;
- (void)setShouldUseBrightMaterial:(_Bool)arg1;
@end
