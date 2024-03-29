//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaAPIRequestFactory : NSObject
{
}

+ (id)_purchasesEpisodesEndpoint;
+ (id)_URLAddAdditionalParameter:(id)arg1;
+ (id)_URLParameterForAdditionalParameters;
+ (id)_URLParameterForExtend:(id)arg1;
+ (id)_URLParameterForIncludeType:(id)arg1 includeRelationship:(id)arg2;
+ (id)_URLParameterForInclude:(id)arg1;
+ (id)_URLParameterForLimit:(id)arg1;
+ (id)_URLParameterForSort:(id)arg1;
+ (id)_URLParameterWithSharedPurchases;
+ (id)_URLParameterWithGenreIDsFilter:(id)arg1;
+ (id)_URLParameterWithGenreFilter:(id)arg1;
+ (id)_URLParameterFilterWithShowIdentifier:(id)arg1;
+ (id)_URLParameterWithOwnerIdentifier:(id)arg1;
+ (id)_URLParameterTypeFilterWithTypes:(id)arg1;
+ (id)_URLRequestWithURLString:(id)arg1;
+ (void)_addTypeFilterToURL:(id *)arg1 forRequest:(id)arg2;
+ (id)genresRequestWithOwnerIdentifier:(id)arg1;
+ (id)genresRequestForVUIFamilySharingGenreIDsFilter:(id)arg1 withOwnerIdentifier:(id)arg2;
+ (id)genresRequestForVUIFamilySharingGenre:(id)arg1 withOwnerIdentifier:(id)arg2;
+ (id)showsPurchasesRequestWithOwnerIdentifier:(id)arg1 sortType:(unsigned long long)arg2;
+ (id)episodesRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;
+ (id)seasonsRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;
+ (id)moviesPurchasesRequestWithOwnerIdentifier:(id)arg1 sortType:(unsigned long long)arg2;
+ (id)recentPurchasesRequestWithOwnerIdentifier:(id)arg1;
+ (id)familyMembersRequest;

@end

