//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CFMorphunAssetsManager : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *_assetPaths;
}

+ (id)sharedMorphunAssetsManager;
- (void).cxx_destruct;
- (void)registerPath:(id)arg1 withLanguage:(id)arg2;
- (id)replaceLanguageCodeFormat:(id)arg1;
- (void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_getNewMorphunPathForLanguage:(id)arg1;
- (id)morphunAssetsPathForLanguage:(id)arg1;
- (id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2;
- (id)init;

@end
