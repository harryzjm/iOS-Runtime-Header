//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DIDropInSession, NSError;

@protocol DISessionStatusDelegate
- (void)session:(DIDropInSession *)arg1 didUpdateUplinkMuteStatus:(_Bool)arg2;
- (void)session:(DIDropInSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)didUpdateSession:(DIDropInSession *)arg1;
- (void)didRemoveSession:(DIDropInSession *)arg1;
- (void)didAddSession:(DIDropInSession *)arg1;
@end

