//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class WFSSHKeyGenerationViewController, WFSSHKeyPair;

@protocol WFSSHKeyGenerationViewControllerDelegate <NSObject>
- (void)keyGenerationViewController:(WFSSHKeyGenerationViewController *)arg1 didFinishWithKeyPair:(WFSSHKeyPair *)arg2;
@end
