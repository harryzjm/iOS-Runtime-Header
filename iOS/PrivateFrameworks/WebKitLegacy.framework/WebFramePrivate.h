//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebFramePrivate : NSObject
{
    NakedPtr_9be60511 coreFrame;
    struct RetainPtr<WebFrameView> webFrameView;
    struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> scriptDebugger;
    id internalLoadDelegate;
    _Bool shouldCreateRenderers;
    _Bool includedInWebKitStatistics;
    struct RetainPtr<NSString> url;
    struct RetainPtr<NSString> provisionalURL;
    _Bool isCommitting;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWebFrameView:(id)arg1;

@end

