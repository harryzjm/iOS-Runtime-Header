//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlayerViewControllerProvider-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider>
{
    _Bool _presentedAndAppeared;
    NSURL *_autoplayURL;
    NSMutableDictionary *_videoPlayerViewControllers;
    NSMutableDictionary *_loseOwnershipBlocks;
    NSMutableDictionary *_pendingVideoPlayerViewControllers;
    NSMutableDictionary *_pendingLoseOwnershipBlocks;
    NSMutableDictionary *_pendingReceiveOwnershipBlocks;
}

@property(readonly, nonatomic) NSMutableDictionary *pendingReceiveOwnershipBlocks; // @synthesize pendingReceiveOwnershipBlocks=_pendingReceiveOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *pendingLoseOwnershipBlocks; // @synthesize pendingLoseOwnershipBlocks=_pendingLoseOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *pendingVideoPlayerViewControllers; // @synthesize pendingVideoPlayerViewControllers=_pendingVideoPlayerViewControllers;
@property(readonly, nonatomic) NSMutableDictionary *loseOwnershipBlocks; // @synthesize loseOwnershipBlocks=_loseOwnershipBlocks;
@property(readonly, nonatomic) NSMutableDictionary *videoPlayerViewControllers; // @synthesize videoPlayerViewControllers=_videoPlayerViewControllers;
@property(copy, nonatomic) NSURL *autoplayURL; // @synthesize autoplayURL=_autoplayURL;
@property(nonatomic) _Bool presentedAndAppeared; // @synthesize presentedAndAppeared=_presentedAndAppeared;
- (void).cxx_destruct;
- (void)autoplayVideoWithURL:(id)arg1;
- (void)registerExistingVideoPlayerViewController:(id)arg1 URL:(id)arg2 loseOwnershipBlock:(CDUnknownBlockType)arg3;
- (id)videoPlayerViewControllerForURL:(id)arg1 receiveOwnershipBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

