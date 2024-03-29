//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemMapper, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface KMAppGlobalTermBridge : NSObject
{
    NSString *_appId;
    KVItemMapper *_itemMapper;
    NSURL *_appIntentVocabURL;
    struct __CFBundle *_cfbundle;
}

- (void).cxx_destruct;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)originAppId;
- (long long)itemType;
- (void)dealloc;
- (id)initWithDeletedOriginAppId:(id)arg1 itemMapper:(id)arg2;
- (id)initWithOriginAppId:(id)arg1 languageCode:(id)arg2 itemMapper:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

