//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SALocation;

@interface SAFmfSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocation *requestedLocation;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *friends;
@property(retain, nonatomic) SALocation *currentLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
