//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue
{
}

+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToUpNextQueue;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPCollection *mediaCollection;
@property(copy, nonatomic) NSString *insertLocation;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
