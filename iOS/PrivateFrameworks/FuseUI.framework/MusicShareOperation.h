//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPUContentItemIdentifierCollection, MusicEntityValueContext, MusicEntityValueProviderWrapper, NSDictionary, NSString, UIViewController;
@protocol MusicEntityValueProviding, MusicJSNativeViewControllerFactory;

@interface MusicShareOperation : NSObject
{
    MusicEntityValueProviderWrapper *_playlistWrapper;
    _Bool _container;
    MusicEntityValueContext *_entityValueContext;
    MPUContentItemIdentifierCollection *_identifierCollection;
    id <MusicEntityValueProviding> _entityValueProvider;
    UIViewController<MusicJSNativeViewControllerFactory> *_viewControllerWithJSNativeViewController;
    NSDictionary *_extraInfo;
    NSString *_jsButtonIdentifier;
    UIViewController *_presentationViewController;
}

+ (_Bool)canShareWithEntityValueContext:(id)arg1 forContainer:(_Bool)arg2;
+ (id)_localizedShareStringForContentType:(unsigned long long)arg1;
@property(nonatomic) __weak UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(copy, nonatomic) NSString *jsButtonIdentifier; // @synthesize jsButtonIdentifier=_jsButtonIdentifier;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) UIViewController<MusicJSNativeViewControllerFactory> *viewControllerWithJSNativeViewController; // @synthesize viewControllerWithJSNativeViewController=_viewControllerWithJSNativeViewController;
@property(readonly, nonatomic, getter=isContainer) _Bool container; // @synthesize container=_container;
@property(readonly, nonatomic) id <MusicEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
@property(readonly, nonatomic) MPUContentItemIdentifierCollection *identifierCollection; // @synthesize identifierCollection=_identifierCollection;
@property(readonly, nonatomic) MusicEntityValueContext *entityValueContext; // @synthesize entityValueContext=_entityValueContext;
- (void).cxx_destruct;
- (void)_dispatchEvent;
- (void)_dispatchEventForPlaylist;
@property(readonly, nonatomic, getter=isSharingDisabled) _Bool sharingDisabled;
@property(readonly, nonatomic) NSString *sharingTitle;
- (void)dispatchEvent;
- (id)initWithMusicEntityValueContext:(id)arg1 forContainer:(_Bool)arg2;

@end

