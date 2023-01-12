//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class CKShare, CSAddParticipantsViewController, NSError, NSURL;

@protocol CSAddParticipantsViewControllerDelegate <NSObject>
- (void)addParticipantsViewController:(CSAddParticipantsViewController *)arg1 completedSharingWithShareURL:(NSURL *)arg2 ckShare:(CKShare *)arg3;
- (void)addParticipantsViewController:(CSAddParticipantsViewController *)arg1 failedToSaveShareWithError:(NSError *)arg2;
@end

