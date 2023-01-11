//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ScreenTimeUI/STPINRemoteViewController-Protocol.h>

@class NSString;

@interface STPINRemoteViewController : _UIRemoteViewController <STPINRemoteViewController>
{
    CDUnknownBlockType _pinServiceDidComplete;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(copy, nonatomic) CDUnknownBlockType pinServiceDidComplete; // @synthesize pinServiceDidComplete=_pinServiceDidComplete;
- (void).cxx_destruct;
- (void)pinServiceDidCompleteWithError:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
