//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSPhishingURLClassifier-Protocol.h>

@class WBSCrowdsourcedFeedbackDomainNormalizer;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter : NSObject <WBSPhishingURLClassifier>
{
    id <WBSCrowdsourcedFeedbackAllowList> _crowdsourcedFeedbackAllowList;
    WBSCrowdsourcedFeedbackDomainNormalizer *_crowdsourcedFeedbackDomainNormalizer;
}

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCrowdsourcedFeedbackAllowList:(id)arg1;

@end
