//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/SXWebContentLoadingPolicyProvider-Protocol.h>

@class NSString;
@protocol FCHeadlineProviding;

@interface NUWebContentLoadingPolicyProvider : NSObject <SXWebContentLoadingPolicyProvider>
{
    id <FCHeadlineProviding> _headline;
}

@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (unsigned long long)loadingPolicy;
- (id)initWithHeadline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

