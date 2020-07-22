//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSource-Protocol.h>

@class NSDate, NSString, NSXPCConnection;

@interface MTXPCClientInfo : NSObject <MTSource>
{
    NSXPCConnection *_connection;
    id _clientLink;
    NSDate *_connectedDate;
}

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;
@property(retain, nonatomic) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property(retain, nonatomic) id clientLink; // @synthesize clientLink=_clientLink;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)sourceIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int processID;
@property(readonly, copy, nonatomic) NSString *processName;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
