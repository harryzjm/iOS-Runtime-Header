//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>

@class MPAVRoutingController, NSString;

@interface MediaControlsStandaloneEndpointController <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_routingController;
}

@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void).cxx_destruct;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAutomaticResponseLoading:(_Bool)arg1;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

