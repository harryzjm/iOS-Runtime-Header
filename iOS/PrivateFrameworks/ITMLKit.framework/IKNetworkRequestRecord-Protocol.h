//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest;

@protocol IKNetworkRequestRecord <NSObject>
@property(retain, nonatomic) NSString *frameId;
@property(readonly, nonatomic) NSString *loaderId;
- (void)loadingError:(NSError *)arg1 withIdentifier:(NSString *)arg2;
- (void)loadingCompletedWithResponseBody:(NSData *)arg1 forIdentifier:(NSString *)arg2;
- (void)loadingCompletedFromCacheWithResponseBody:(NSData *)arg1 mimeType:(NSString *)arg2 resourceType:(unsigned long long)arg3 forIdentifier:(NSString *)arg4;
- (void)dataReceived:(NSData *)arg1 withIdentifier:(NSString *)arg2;
- (void)responseReceived:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2 resourceType:(unsigned long long)arg3 withIdentifier:(NSString *)arg4;
- (void)request:(NSURLRequest *)arg1 willBeSentWithIdentifier:(NSString *)arg2;
@end

