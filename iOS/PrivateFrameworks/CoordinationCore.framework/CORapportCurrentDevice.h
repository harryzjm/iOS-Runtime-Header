//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CORapportBrowser, NSString, NSUUID;
@protocol COCompanionLinkClientProtocol;

__attribute__((visibility("hidden")))
@interface CORapportCurrentDevice : NSObject
{
    NSString *_IDSIdentifier;
    CDUnknownBlockType _companionLinkProvider;
    id <COCompanionLinkClientProtocol> _client;
    CORapportBrowser *_browser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak CORapportBrowser *browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) id <COCompanionLinkClientProtocol> client; // @synthesize client=_client;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasSameBackingDeviceAs:(id)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (_Bool)producesElectionCapableTransport;
@property(readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property(copy, nonatomic) CDUnknownBlockType companionLinkProvider; // @synthesize companionLinkProvider=_companionLinkProvider;
@property(readonly, copy, nonatomic) NSString *IDSIdentifier; // @synthesize IDSIdentifier=_IDSIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithClient:(id)arg1 browser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

