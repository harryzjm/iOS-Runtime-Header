//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKDURLRequest;

@protocol CKDURLRequestAuthRetryDelegate <NSObject>
- (void)requestDidEndWaitingForUserAuth:(CKDURLRequest *)arg1;
- (void)requestDidBeginWaitingForUserAuth:(CKDURLRequest *)arg1;
@end

