//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, UIActivityViewController;

@protocol UIActivityViewControllerAirDropDelegate <NSObject>

@optional
- (void)activityViewControllerDidFinishAirdropTransfer:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(UIActivityViewController *)arg1;
- (void)activityViewController:(UIActivityViewController *)arg1 willStartAirdropTransferToRecipient:(NSString *)arg2;
@end

