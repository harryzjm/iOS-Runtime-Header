//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayer, NSString;

@protocol AdAnalyzable
- (NSString *)currentAdIdentifier;

@optional
- (void)unregisterVideoPlayerForAdAnalytics:(AVPlayer *)arg1;
- (void)registerVideoPlayerForAdAnalytics:(AVPlayer *)arg1;
@end
