//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVProviderDatasetBridge-Protocol.h>

@class MPMediaLibrary, NSString;

@interface CKVMediaLibraryBridge : NSObject <CKVProviderDatasetBridge>
{
    MPMediaLibrary *_mediaLibrary;
}

- (void).cxx_destruct;
- (_Bool)enumerateVocabularyItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)originApp;
- (Class)itemClass;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
