//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SAHandoffPayload;

@interface SASetHandoffPayload
{
}

+ (id)setHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setHandoffPayload;
- (_Bool)requiresResponse;
@property(retain, nonatomic) id <SAHandoffPayload> handoffPayload;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
