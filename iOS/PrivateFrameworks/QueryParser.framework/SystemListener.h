//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, SRResources;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SystemListener : NSObject
{
    _Bool _locked_hasUpdatedResources;
    _Bool _locked_hasUpdatedLocale;
    NSLocale *_locked_currentLocale;
    NSArray *_locked_currentPreferredLanguages;
    NSObject<OS_dispatch_queue> *_resourcesQueue;
    NSObject<OS_dispatch_queue> *_localeQueue;
    SRResources *_currentResources;
    _Bool _autoUpdatingLocale;
    _Bool _force;
}

+ (id)defaultListener;
- (void).cxx_destruct;
@property(nonatomic) _Bool force; // @synthesize force=_force;
- (void)dealloc;
- (void)updateLocale;
- (void)updateResources;
- (void)updateLocaleWithLocale:(id)arg1 preferredLanguages:(id)arg2;
- (id)pathsForContentType:(id)arg1 isUpdate:(_Bool)arg2;
- (id)currentPreferredLanguagesWithUpdate:(_Bool)arg1;
- (id)currentLocaleWithUpdate:(_Bool)arg1;
- (_Bool)hasUpdatedResources;
- (_Bool)hasUpdatedLocale;
- (void)setAutoUpdatingLocale:(_Bool)arg1;
- (id)init;

@end

