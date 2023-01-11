//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionPreviewActivity-Protocol.h>

@class NSString, NSURL;
@protocol SXURLPreviewing;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity>
{
    id <SXURLPreviewing> _URLPreviewing;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) id <SXURLPreviewing> URLPreviewing; // @synthesize URLPreviewing=_URLPreviewing;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)previewViewControllerForAction:(id)arg1;
- (id)initWithURLPreviewing:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
