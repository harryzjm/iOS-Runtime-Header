//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDMediaBrowser, NSArray;

@protocol HMDMediaBrowserDelegate <NSObject>
- (void)browser:(HMDMediaBrowser *)arg1 didUpdateEndpoints:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveSessions:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveAdvertisements:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didAddAdvertisements:(NSArray *)arg2;
@end

