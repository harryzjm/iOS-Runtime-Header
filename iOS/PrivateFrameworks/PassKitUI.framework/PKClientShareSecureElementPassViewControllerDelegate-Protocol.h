//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, NSString, NSURL;

@protocol PKClientShareSecureElementPassViewControllerDelegate <NSObject>
- (void)didCreateShareURL:(NSURL *)arg1 activationCode:(NSString *)arg2 error:(NSError *)arg3;
- (void)didFinishShareWithDidUserShare:(_Bool)arg1 error:(NSError *)arg2;
@end

