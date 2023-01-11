//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PLResourceIdentity;

@interface PHResourceAvailabilityRequest
{
    id <PLResourceIdentity> _resourceIdentity;
}

+ (id)_convertResourceIdentityToPlistDictionary:(id)arg1;
@property(readonly, nonatomic) id <PLResourceIdentity> resourceIdentity; // @synthesize resourceIdentity=_resourceIdentity;
- (void).cxx_destruct;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithAssetObjectID:(id)arg1 resourceIdentity:(id)arg2;

@end

