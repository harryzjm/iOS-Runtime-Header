//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveIntentSlot
{
}

+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resolveIntentSlot;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSNumber *intentSlotValueIndex;
@property(copy, nonatomic) NSString *intentSlotKeyPath;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
