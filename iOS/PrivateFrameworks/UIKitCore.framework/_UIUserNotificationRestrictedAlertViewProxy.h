//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy <UIAlertViewDelegate>
{
    id _delegate;
}

+ (id)restrictedProxyForAlertView:(id)arg1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
