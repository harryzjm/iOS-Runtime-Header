//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SAMPGetState;

@interface SAMPGetStateResponseRemote
{
}

+ (id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getStateResponseRemote;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) double routeTimeout;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(retain, nonatomic) SAMPGetState *getState;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
