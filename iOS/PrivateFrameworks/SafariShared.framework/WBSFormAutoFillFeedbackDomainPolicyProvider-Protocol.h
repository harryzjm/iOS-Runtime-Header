//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString;
@protocol WBSFormAutoFillFeedbackProcessor;

@protocol WBSFormAutoFillFeedbackDomainPolicyProvider <NSObject>
- (void)autoFillFeedbackProcessor:(id <WBSFormAutoFillFeedbackProcessor>)arg1 determineWhetherToSendFeedbackForDomain:(NSString *)arg2 resultHandler:(void (^)(long long))arg3;
@end

