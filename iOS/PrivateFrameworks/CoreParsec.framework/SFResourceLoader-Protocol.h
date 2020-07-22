//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class SFCard, SFImage, SFMoreResults;

@protocol SFResourceLoader <NSObject>

@optional
- (_Bool)loadMoreResults:(SFMoreResults *)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)loadCard:(SFCard *)arg1 withCompletionHandler:(void (^)(SFCard *, NSError *))arg2;
- (_Bool)loadImage:(SFImage *)arg1 withCompletionHandler:(void (^)(SFImage *, NSError *))arg2;
@end

