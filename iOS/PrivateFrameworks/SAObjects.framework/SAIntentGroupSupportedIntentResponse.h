//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse
{
}

+ (id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)supportedIntentResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *useCaseId;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
