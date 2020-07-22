//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@protocol PGPictureInPictureViewController <NSObject>

@optional
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
- (void)actionButtonTapped;
- (void)viewDidResize;
- (void)viewWillResize;
- (void)didAnimatePictureInPictureStop;
- (void)willAnimatePictureInPictureStop;
- (void)didAnimatePictureInPictureStart;
- (void)willAnimatePictureInPictureStart;
@end

