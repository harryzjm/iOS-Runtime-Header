//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsUI/NSObservable-Protocol.h>

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable>
{
    NSString *_key;
    _BRObservableFilePresenter *_presenter;
}

+ (id)observerForKey:(id)arg1 onFileURL:(id)arg2;
+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)_applicationWillResignActive:(id)arg1;
+ (void)_deregisterInstance:(id)arg1;
+ (void)_registerInstance:(id)arg1;
+ (void)_registerForApplicationLifecycleNotifications;
- (void).cxx_destruct;
@property(retain, nonatomic) _BRObservableFilePresenter *presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void)_presenterDidChange;
- (void)dealloc;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (id)initWithKey:(id)arg1 fileURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
