//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIJSApplication-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSApplication <VUIJSApplication>
{
}

@property(readonly, nonatomic) NSDictionary *traitCollection;
- (void)reload:(id)arg1:(id)arg2;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (void)updatedAppWithOptions:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;

@end
