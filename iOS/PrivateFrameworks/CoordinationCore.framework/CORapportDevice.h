//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CORapportTransport, NSString, NSUUID, RPCompanionLinkDevice;

__attribute__((visibility("hidden")))
@interface CORapportDevice : NSObject
{
    NSString *_IDSIdentifier;
    CDUnknownBlockType _companionLinkProvider;
    RPCompanionLinkDevice *_device;
    NSUUID *_HomeKitIdentifier;
    CORapportTransport *_sourceTransport;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) CORapportTransport *sourceTransport; // @synthesize sourceTransport=_sourceTransport;
@property(retain, nonatomic) NSUUID *HomeKitIdentifier; // @synthesize HomeKitIdentifier=_HomeKitIdentifier;
@property(readonly, nonatomic) RPCompanionLinkDevice *device; // @synthesize device=_device;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasSameBackingDeviceAs:(id)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (_Bool)producesElectionCapableTransport;
@property(copy, nonatomic) CDUnknownBlockType companionLinkProvider; // @synthesize companionLinkProvider=_companionLinkProvider;
@property(readonly, copy, nonatomic) NSString *IDSIdentifier; // @synthesize IDSIdentifier=_IDSIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithCompanionLinkDevice:(id)arg1 sourceTransport:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

