//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class SBUIBannerContext;
@protocol SBUIBannerSource;

@protocol SBUIBannerTargetBase <NSObject>
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg1;
- (void)cacheBannerForContext:(SBUIBannerContext *)arg1 withCompletion:(void (^)(void))arg2;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
@end

