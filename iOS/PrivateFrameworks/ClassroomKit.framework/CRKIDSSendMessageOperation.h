//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATOperation.h>

@class NSDate, NSDictionary, NSString;
@protocol CRKIDSListener, CRKIDSLocalPrimitives;

@interface CRKIDSSendMessageOperation : CATOperation
{
    id <CRKIDSLocalPrimitives> _IDSLocalPrimitives;
    NSDictionary *_message;
    NSString *_destinationAddress;
    id <CRKIDSListener> _messageSendListener;
    NSString *_messageSendIdentifier;
    NSDate *_initialSendDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *initialSendDate; // @synthesize initialSendDate=_initialSendDate;
@property(copy, nonatomic) NSString *messageSendIdentifier; // @synthesize messageSendIdentifier=_messageSendIdentifier;
@property(retain, nonatomic) id <CRKIDSListener> messageSendListener; // @synthesize messageSendListener=_messageSendListener;
@property(readonly, copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(readonly, nonatomic) id <CRKIDSLocalPrimitives> IDSLocalPrimitives; // @synthesize IDSLocalPrimitives=_IDSLocalPrimitives;
- (void)didSendMessageWithIdentifier:(id)arg1 sendSuccess:(_Bool)arg2 error:(id)arg3;
- (void)main;
- (void)cancel;
- (_Bool)isAsynchronous;
- (id)initWithIDSLocalPrimitives:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3;

@end
