//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class AVPlayerViewController, NSArray, VUIImageProxy;
@protocol VUIMultiPlayerViewControllerDelegate;

@protocol VUIMultiPlayerViewController <NSObject>
@property(retain, nonatomic) VUIImageProxy *backgroundImageProxy;
@property(readonly, nonatomic) _Bool isShowingProspectivePlayer;
@property(readonly, nonatomic) unsigned long long distribution;
@property(readonly, nonatomic) NSArray *playerViewControllers;
@property(nonatomic) __weak id <VUIMultiPlayerViewControllerDelegate> delegate;
- (void)captureAndShowPlayerScreenshots;
- (struct CGRect)presentationRectForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)setProspectivePlayerVisible:(_Bool)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)setProspectivePlayerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setDetailsViewControllerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)exitFullscreenWithCompletion:(void (^)(void))arg1;
- (void)enterFullscreenWithPlayerViewController:(AVPlayerViewController *)arg1 completion:(void (^)(void))arg2;
- (void)replacePlayerViewController:(AVPlayerViewController *)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)removePlayerViewController:(AVPlayerViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)addPlayerViewController:(AVPlayerViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

