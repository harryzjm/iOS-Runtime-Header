//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelStoreBrowseResponse, NSURL;

@interface MPModelStoreBrowseRequest
{
    NSURL *_loadAdditionalContentURL;
    MPModelStoreBrowseResponse *_previousRetrievedNestedResponse;
    long long _domain;
    long long _filteringPolicy;
    MPModelStoreBrowseResponse *_previousResponse;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
@property(nonatomic) long long domain; // @synthesize domain=_domain;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // @synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
- (void).cxx_destruct;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

