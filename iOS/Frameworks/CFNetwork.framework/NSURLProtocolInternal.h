//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCachedURLResponse, NSURLRequest;
@protocol NSURLProtocolClient;

@interface NSURLProtocolInternal : NSObject
{
    id <NSURLProtocolClient> client;
    NSURLRequest *request;
    NSCachedURLResponse *cachedResponse;
}

- (void)dealloc;

@end
