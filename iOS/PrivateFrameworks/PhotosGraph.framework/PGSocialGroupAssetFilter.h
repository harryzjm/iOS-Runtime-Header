//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGAssetFilter-Protocol.h>

@class NSString;

@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter>
{
    double _minimumRatioOfFacesComingFromSocialGroup;
    double _minimumRatioOfPersonsInSocialGroupPresent;
}

+ (_Bool)supportsSecureCoding;
+ (id)criteriaWithDictionary:(id)arg1;
+ (id)name;
@property(readonly, nonatomic) double minimumRatioOfPersonsInSocialGroupPresent; // @synthesize minimumRatioOfPersonsInSocialGroupPresent=_minimumRatioOfPersonsInSocialGroupPresent;
@property(readonly, nonatomic) double minimumRatioOfFacesComingFromSocialGroup; // @synthesize minimumRatioOfFacesComingFromSocialGroup=_minimumRatioOfFacesComingFromSocialGroup;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)asset:(id)arg1 passesForPersonLocalIdentifiersInSocialGroup:(id)arg2;
- (id)filteredAssetsFromAssets:(id)arg1 withPersonLocalIdentifiersInSocialGroup:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
