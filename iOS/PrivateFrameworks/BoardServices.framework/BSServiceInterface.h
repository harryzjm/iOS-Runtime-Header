//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSDescriptionProviding-Protocol.h>
#import <BoardServices/NSCopying-Protocol.h>
#import <BoardServices/NSMutableCopying-Protocol.h>

@class BSObjCProtocol, NSString;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean *_clientWaitsForActivation;
}

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;
@property(readonly, copy, nonatomic) BSObjCProtocol *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) BSObjCProtocol *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long clientMessagingExpectation; // @dynamic clientMessagingExpectation;
- (id)_initWithIdentifier:(id)arg1 server:(id)arg2 client:(id)arg3 clientWaitsForActivation:(struct __CFBoolean *)arg4;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
