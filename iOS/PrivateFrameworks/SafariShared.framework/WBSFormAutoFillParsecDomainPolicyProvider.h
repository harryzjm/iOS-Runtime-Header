//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>

@class NSString;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>
{
}

- (id)_correctionsStore;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
