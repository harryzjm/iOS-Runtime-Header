//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailSupport/NSObject-Protocol.h>

@protocol MSAssetDownloadSchedulerContinuation <NSObject>
- (void)stopScheduling;
- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;
@end
