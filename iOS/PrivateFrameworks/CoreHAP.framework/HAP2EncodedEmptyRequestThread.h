//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2EncodedRequest-Protocol.h>

@class NSString;

@interface HAP2EncodedEmptyRequestThread <HAP2EncodedRequest>
{
    unsigned long long _requestType;
}

@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (id)serialize;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)body;
- (id)initWithRequestType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
