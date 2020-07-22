//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegate <NSObject>

@optional
- (void)safariViewController:(SFSafariViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)safariViewController:(SFSafariViewController *)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(SFSafariViewController *)arg1;
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 excludedActivityTypesForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 activityItemsForURL:(NSURL *)arg2 title:(NSString *)arg3;
@end

