//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol SGSuggestionsServiceFidesProtocol
- (void)modelMetadataUpdateWithPayload:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)planReceivedFromServerWithPayload:(NSData *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end
