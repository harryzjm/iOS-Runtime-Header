//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterTicket-Protocol.h>

@class GEORequestCounterRemoteProxy, NSString;

__attribute__((visibility("hidden")))
@interface _GEORemoteRequestCounterTicket : NSObject <GEORequestCounterTicket>
{
    unsigned char _type;
    NSString *_appId;
    long long _requestId;
    GEORequestCounterRemoteProxy *_remoteProxy;
}

+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 requestId:(long long)arg3 remoteProxy:(id)arg4;
- (void).cxx_destruct;
- (void)requestCompletedWithResult:(unsigned char)arg1 mode:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
