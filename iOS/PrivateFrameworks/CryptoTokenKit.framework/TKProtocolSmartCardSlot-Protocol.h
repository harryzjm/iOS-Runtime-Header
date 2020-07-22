//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/TKProtocolSlot-Protocol.h>

@class NSData, NSDictionary, NSNumber, TKSmartCardUserInteraction;
@protocol NSSecureCoding;

@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
- (void)runUserInteraction:(TKSmartCardUserInteraction<NSSecureCoding> *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)setAttrib:(unsigned int)arg1 data:(NSData *)arg2 reply:(void (^)(_Bool, _Bool))arg3;
- (void)getAttrib:(unsigned int)arg1 reply:(void (^)(NSData *, long long))arg2;
- (void)sendControl:(id)arg1 data:(NSData *)arg2 expectedLength:(unsigned int)arg3 reply:(void (^)(NSData *))arg4;
- (void)sessionWithParameters:(NSDictionary *)arg1 reply:(void (^)(id <TKProtocolSmartCardSession>, NSDictionary *, NSError *))arg2;
- (void)reserveProtocols:(NSNumber *)arg1 reservationId:(NSNumber *)arg2 exclusive:(_Bool)arg3 reply:(void (^)(NSNumber *, NSNumber *, long long))arg4;
@end

