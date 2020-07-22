//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WKWebProcessPlugInLoadDelegate-Protocol.h>

@class NSString, WBSWebProcessPlugIn, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate>
{
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebProcessPlugIn *_webProcessPlugIn;
}

@property(readonly, nonatomic) WBSWebProcessPlugIn *webProcessPlugIn; // @synthesize webProcessPlugIn=_webProcessPlugIn;
@property(readonly, nonatomic) WKWebProcessPlugInBrowserContextController *browserContextController; // @synthesize browserContextController=_browserContextController;
- (void).cxx_destruct;
- (id)requestIfDoNotTrackEnabled:(id)arg1;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *mainFrame;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

