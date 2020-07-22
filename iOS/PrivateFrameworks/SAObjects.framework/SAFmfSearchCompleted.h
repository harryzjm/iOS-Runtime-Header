//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAFmfSearchCompleted <SAServerBoundCommand>
{
}

+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSArray *fmfLocations;
@property(copy, nonatomic) NSNumber *atRequestedLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

