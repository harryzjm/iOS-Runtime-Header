//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASMessageHandler : NSObject
{
    Class _protobufClass;
    SEL _handleReceiveMessageAction;
    SEL _handleErrorSendingMessageAction;
}

@property(nonatomic) SEL handleErrorSendingMessageAction; // @synthesize handleErrorSendingMessageAction=_handleErrorSendingMessageAction;
@property(nonatomic) SEL handleReceiveMessageAction; // @synthesize handleReceiveMessageAction=_handleReceiveMessageAction;
@property(nonatomic) Class protobufClass; // @synthesize protobufClass=_protobufClass;

@end

