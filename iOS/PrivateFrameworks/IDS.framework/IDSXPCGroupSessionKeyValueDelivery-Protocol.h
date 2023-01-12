//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;
@protocol IDSXPCGroupSessionKeyValueDeliveryDelegate;

@protocol IDSXPCGroupSessionKeyValueDelivery <NSObject>
- (void)test_receiveData:(NSData *)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;
- (void)sendData:(NSData *)arg1 forKey:(unsigned int)arg2 encryption:(unsigned int)arg3 capability:(NSString *)arg4 withCompletion:(void (^)(NSError *))arg5;
- (void)removeDeliveryHandler:(NSUUID *)arg1;
- (void)addDeliveryHandler:(id <IDSXPCGroupSessionKeyValueDeliveryDelegate>)arg1 uuid:(NSUUID *)arg2;
@end

