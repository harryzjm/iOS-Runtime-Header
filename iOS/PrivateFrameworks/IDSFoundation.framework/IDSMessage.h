//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSNumber;

@interface IDSMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
- (void).cxx_destruct;
- (_Bool)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsAPSRetries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

