//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveAppForIntent
{
}

+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resolveAppForIntent;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(copy, nonatomic) NSArray *appsList;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

