//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSFormAutoFillCorrectionSet;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider;

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
- (void)sendFeedbackWithCorrectionSet:(WBSFormAutoFillCorrectionSet *)arg1;
@end

