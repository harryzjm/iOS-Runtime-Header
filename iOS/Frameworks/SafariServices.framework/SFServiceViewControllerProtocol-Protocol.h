//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SFSafariViewControllerConfiguration, UIColor;

@protocol SFServiceViewControllerProtocol <NSObject>
- (void)stopDigitalHealthTracking;
- (void)beginDigitalHealthTracking;
- (void)prepareForDisplayWithCompletionHandler:(void (^)(void))arg1;
- (void)didRequestShowLinkPreviews:(_Bool)arg1;
- (void)startResolveRedirectionForURL:(NSURL *)arg1;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
- (void)openCurrentURLInSafariFromPreviewAction;
- (void)decideCookieSharingForURL:(NSURL *)arg1 callbackURLScheme:(NSString *)arg2;
- (void)didDetectUserInteractionFromHostApp;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;
- (void)didFetchCustomActivities:(NSArray *)arg1 excludedActivityTypes:(NSArray *)arg2;
- (void)repostNotificationInViewService:(NSString *)arg1;
- (void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setHostAppModalPresentationStyle:(long long)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1 controlTintColor:(UIColor *)arg2;
- (void)setPreferredControlTintColor:(UIColor *)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)loadURL:(NSURL *)arg1;
@end
