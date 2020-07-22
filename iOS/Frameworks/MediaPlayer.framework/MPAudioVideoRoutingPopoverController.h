//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPopoverController.h>

#import <MediaPlayer/MPAVRoutingViewControllerDelegate-Protocol.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
    _Bool _mirroringOnly;
}

@property(nonatomic) _Bool mirroringOnly; // @synthesize mirroringOnly=_mirroringOnly;
- (void).cxx_destruct;
- (id)_tableViewController;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (id)routingController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithType:(long long)arg1 includeMirroring:(_Bool)arg2;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

