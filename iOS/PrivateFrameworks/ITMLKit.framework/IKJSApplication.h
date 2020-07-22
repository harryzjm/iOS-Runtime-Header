//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSApplication-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSApplication-Protocol.h>
#import <ITMLKit/_IKJSApplicationProxy-Protocol.h>

@class NSDictionary, NSString;

@interface IKJSApplication <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>
{
}

@property(readonly, nonatomic) NSDictionary *traitCollection;
- (void)update;
- (void)reload:(id)arg1:(id)arg2;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (void)traitCollectionChanged:(id)arg1;
- (void)updatedAppWithOptions:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (id)asPrivateIKJSApplication;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
