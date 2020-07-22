//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <CoreCDPUI/CDPHostInterface-Protocol.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface>
{
    CDUnknownBlockType _viewServiceTerminationBlock;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(copy, nonatomic) CDUnknownBlockType viewServiceTerminationBlock; // @synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock;
- (void).cxx_destruct;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

