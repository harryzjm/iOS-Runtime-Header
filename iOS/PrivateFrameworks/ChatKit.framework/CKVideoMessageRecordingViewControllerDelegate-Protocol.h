//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMediaObject, CKVideoMessageRecordingViewController, NSError;

@protocol CKVideoMessageRecordingViewControllerDelegate <NSObject>
- (void)ckVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 mediaObjectCaptured:(CKMediaObject *)arg2 error:(NSError *)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(CKVideoMessageRecordingViewController *)arg1;
@end

