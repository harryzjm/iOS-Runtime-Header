//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SANPRemoveOutputDevicesFromGroup
{
}

+ (id)removeOutputDevicesFromGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)removeOutputDevicesFromGroup;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *groupID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
