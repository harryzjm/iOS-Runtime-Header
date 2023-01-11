//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed <SAServerBoundCommand>
{
}

+ (id)getSingleClientStateFailedWithReason:(id)arg1;
+ (id)getSingleClientStateFailedWithErrorCode:(long long)arg1;
+ (id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSingleClientStateFailed;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAAceClientState *attemptedClientState;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)initWithReason:(id)arg1;
- (id)initWithErrorCode:(long long)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
