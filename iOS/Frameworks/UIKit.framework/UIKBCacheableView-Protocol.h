//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol UIKBCacheableView <NSObject>
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
@property(readonly, nonatomic) NSString *cacheKey;
- (NSDictionary *)cacheKeysForRenderFlags:(NSArray *)arg1;

@optional
- (void)drawContentsOfRenderers:(NSArray *)arg1;
@end

