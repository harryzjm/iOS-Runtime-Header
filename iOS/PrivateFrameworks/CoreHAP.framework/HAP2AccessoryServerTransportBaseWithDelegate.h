//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerTransport-Protocol.h>

@class NSString;
@protocol HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportDelegate;

@interface HAP2AccessoryServerTransportBaseWithDelegate <HAP2AccessoryServerTransport>
{
    id <HAP2AccessoryServerTransportDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didChangeStateWithError:(id)arg1;
@property(nonatomic) __weak id <HAP2AccessoryServerTransportDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double maxRequestTimeout;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HAP2AccessoryServerTransportCommon> underlyingTransport;

@end
