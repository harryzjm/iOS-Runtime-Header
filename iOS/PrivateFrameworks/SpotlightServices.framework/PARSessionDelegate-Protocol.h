//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightServices/NSObject-Protocol.h>

@class NSError, NSString, PARBag, PARSession;

@protocol PARSessionDelegate <NSObject>
- (void)session:(PARSession *)arg1 bag:(PARBag *)arg2 didLoadWithError:(NSError *)arg3;

@optional
- (void)session:(PARSession *)arg1 didDeleteResource:(NSString *)arg2;
- (void)session:(PARSession *)arg1 didDownloadResource:(NSString *)arg2;
@end

