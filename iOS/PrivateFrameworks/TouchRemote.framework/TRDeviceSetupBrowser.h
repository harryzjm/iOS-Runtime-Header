//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchRemote/TRTransferBrowserDelegate-Protocol.h>

@class NSString, TRDeviceSetupPeripheral, TRTransferBrowser;
@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>
{
    id <TRDeviceSetupBrowserDelegate> _delegate;
    TRTransferBrowser *_transferBrowser;
    TRDeviceSetupPeripheral *_peripheral;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TRDeviceSetupPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) TRTransferBrowser *transferBrowser; // @synthesize transferBrowser=_transferBrowser;
@property(nonatomic) __weak id <TRDeviceSetupBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;
- (void)defer;
@property(readonly, nonatomic) long long state;
- (void)start;
- (void)browserDidDisconnect:(id)arg1;
- (void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)browser:(id)arg1 didStartTransferWithSendDataHandler:(CDUnknownBlockType)arg2;
- (void)browserDidChangeState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
