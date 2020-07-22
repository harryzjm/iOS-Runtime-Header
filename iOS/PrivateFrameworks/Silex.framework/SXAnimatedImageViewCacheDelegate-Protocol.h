//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXAnimatedImageViewCache;

@protocol SXAnimatedImageViewCacheDelegate <NSObject>

@optional
- (void)animatedImageViewCache:(SXAnimatedImageViewCache *)arg1 didPruneImageForFrameIndex:(unsigned long long)arg2;
- (void)animatedImageViewCache:(SXAnimatedImageViewCache *)arg1 didCacheImageForFrameIndex:(unsigned long long)arg2;
@end

