//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/SFWebViewControllerDelegate-Protocol.h>

@class NSURLRequest, SFWebViewController;

@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
- (void)createReaderWebViewForWebViewController:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)webViewControllerDidDetermineReaderAvailability:(SFWebViewController *)arg1 dueToSameDocumentNavigation:(_Bool)arg2;

@optional
- (void)webViewControllerReaderDidBecomeReady:(SFWebViewController *)arg1;
@end

