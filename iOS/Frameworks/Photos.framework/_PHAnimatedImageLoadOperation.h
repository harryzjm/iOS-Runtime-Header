//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation
{
    long long _cacheStrategy;
    _Bool _useSharedImageDecoding;
    NSURL *_animatedImageURL;
    PHAnimatedImage *_animatedImage;
}

+ (id)_requestIsolationQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (id)_animatedImageSharedLoadingQueue;
+ (id)_removeOperation:(long long)arg1;
+ (void)_registerOperation:(id)arg1 forRequestID:(long long)arg2;
+ (long long)nextRequestID;
@property(retain) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;

@end

