//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKObjectAuthorizationPromptSession;

@protocol _HKDocumentPickerPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithSession:(HKObjectAuthorizationPromptSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

