//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString, NTCatchUpOperationArticleIDsRequest, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedConfiguration;
    NTCatchUpOperationArticleIDsRequest *_mandatoryArticleIDsRequest;
    NTCatchUpOperationArticleIDsRequest *_personalizedArticleIDsRequest;
}

@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest; // @synthesize personalizedArticleIDsRequest=_personalizedArticleIDsRequest;
@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest; // @synthesize mandatoryArticleIDsRequest=_mandatoryArticleIDsRequest;
@property(copy, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration; // @synthesize personalizedConfiguration=_personalizedConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)initWithPersonalizedConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

