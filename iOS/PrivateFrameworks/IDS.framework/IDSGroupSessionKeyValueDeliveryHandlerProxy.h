//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol IDSGroupSessionKeyValueDeliveryHandler;

@interface IDSGroupSessionKeyValueDeliveryHandlerProxy : NSObject
{
    NSUUID *_handlerUUID;
    id <IDSGroupSessionKeyValueDeliveryHandler> _handler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IDSGroupSessionKeyValueDeliveryHandler> handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSUUID *handlerUUID; // @synthesize handlerUUID=_handlerUUID;
- (void)handleGroupSessionKeyValues:(id)arg1;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

