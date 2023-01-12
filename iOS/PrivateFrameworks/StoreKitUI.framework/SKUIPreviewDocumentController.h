//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDocument, NSHashTable, NSOperationQueue, NSString, SKUIClientContext, SUAudioPlayer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewDocumentController : NSObject
{
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (id)_operationQueue;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)overlayViewControllerWithBackgroundStyle:(long long)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
@property(readonly, nonatomic, getter=isPreviewActive) _Bool previewActive;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

