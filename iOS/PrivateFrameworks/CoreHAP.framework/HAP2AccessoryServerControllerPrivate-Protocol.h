//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerController-Protocol.h>

@protocol HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerEncoding, HAP2AccessoryServerPrivate, HAP2AccessoryServerSecureTransport;

@protocol HAP2AccessoryServerControllerPrivate <HAP2AccessoryServerController>
@property(readonly, nonatomic) id <HAP2AccessoryServerSecureTransport> transport;
@property(readonly, nonatomic) id <HAP2AccessoryServerEncoding> encoding;
@property(nonatomic) __weak id <HAP2AccessoryServerPrivate> accessoryServer;
- (_Bool)mergeWithNewController:(id <HAP2AccessoryServerControllerPrivate>)arg1;
@end
