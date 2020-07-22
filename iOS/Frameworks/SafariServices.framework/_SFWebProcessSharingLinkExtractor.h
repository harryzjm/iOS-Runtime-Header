//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFWebProcessSharingLinkExtractor-Protocol.h>

@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor>
{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (void).cxx_destruct;
- (id)_extractDominantIFrameWithInjectedObject:(id)arg1;
- (id)_extractCanonicalLinkWithInjectedObject:(id)arg1;
- (id)_extractSharingLink;
- (void)fetchSharingLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_injectedLinkExtractorSourceString;
- (void)_setUpRemoteInterface;
- (id)initWithPageController:(id)arg1;

@end

