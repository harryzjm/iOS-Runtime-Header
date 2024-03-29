//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol _MXExtensionURLHandling;

__attribute__((visibility("hidden")))
@interface _MXExtensionHostContext
{
    id <_MXExtensionURLHandling> _URLHandlingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_MXExtensionURLHandling> URLHandlingDelegate; // @synthesize URLHandlingDelegate=_URLHandlingDelegate;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

