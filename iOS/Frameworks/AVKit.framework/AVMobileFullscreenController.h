//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController;
@protocol AVMobileFullscreenControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileFullscreenController : NSObject
{
    AVPlayerViewController *_playerViewController;
    id <AVMobileFullscreenControllerDelegate> _delegate;
    unsigned long long _presentationState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) __weak id <AVMobileFullscreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePresentationStateTo:(unsigned long long)arg1;
- (void)enterFullscreen:(id)arg1;
- (void)exitFullscreen:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;

@end

