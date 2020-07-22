//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAHandoffPayload-Protocol.h>

@class NSData, NSString;

@interface SASessionHandoffPayload <SAHandoffPayload>
{
}

+ (id)sessionHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sessionHandoffPayload;
@property(copy, nonatomic) NSData *sessionHandoffData;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

