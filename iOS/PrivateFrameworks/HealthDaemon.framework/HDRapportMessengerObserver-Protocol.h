//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDRapportMessenger, HDRapportRequestIdentifier, NSData;

@protocol HDRapportMessengerObserver <NSObject>
- (void)rapportMessenger:(HDRapportMessenger *)arg1 didReceiveRequest:(HDRapportRequestIdentifier *)arg2 data:(NSData *)arg3 responseHandler:(void (^)(NSData *, NSError *))arg4;
@end

