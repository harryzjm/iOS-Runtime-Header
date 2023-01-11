//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupIntentSearchResponse <SAClientBoundCommand>
{
}

+ (id)intentSearchResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)intentSearchResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *metadata;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
