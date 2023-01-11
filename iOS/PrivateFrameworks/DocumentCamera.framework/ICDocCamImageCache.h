//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DCLRUCache, NSMutableDictionary, NSURL;
@protocol DCDataCryptorDelegate, OS_dispatch_queue;

@interface ICDocCamImageCache : NSObject
{
    id <DCDataCryptorDelegate> _dataCryptorDelegate;
    NSURL *_cachesDirectoryURL;
    NSURL *_docCamImageDirectoryURL;
    NSObject<OS_dispatch_queue> *_imageCacheQueue;
    DCLRUCache *_inMemoryImageCache;
    NSMutableDictionary *_imageSizeCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageSizeCache; // @synthesize imageSizeCache=_imageSizeCache;
@property(retain, nonatomic) DCLRUCache *inMemoryImageCache; // @synthesize inMemoryImageCache=_inMemoryImageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue; // @synthesize imageCacheQueue=_imageCacheQueue;
@property(readonly, nonatomic) NSURL *docCamImageDirectoryURL; // @synthesize docCamImageDirectoryURL=_docCamImageDirectoryURL;
@property(readonly, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
@property(retain, nonatomic) id <DCDataCryptorDelegate> dataCryptorDelegate; // @synthesize dataCryptorDelegate=_dataCryptorDelegate;
- (void)applicationWillTerminate:(id)arg1;
- (id)createNSDataFrom:(id)arg1 metaData:(id)arg2;
- (void)clearInMemoryCache;
- (_Bool)deleteAllImages;
- (_Bool)deleteImage:(id)arg1;
- (id)getImage:(id)arg1;
- (id)getImageURL:(id)arg1 async:(_Bool)arg2;
- (id)getImageURL:(id)arg1;
- (struct CGSize)getImageSize:(id)arg1;
- (_Bool)replaceImage:(id)arg1 metaData:(id)arg2 uuid:(id)arg3;
- (id)setImage:(id)arg1 metaData:(id)arg2 addToMemoryCache:(_Bool)arg3;
- (id)setImage:(id)arg1 metaData:(id)arg2;
- (_Bool)makeSureScanDirectoryExists:(id *)arg1;
- (void)dealloc;
- (id)initWithDataCryptorDelegate:(id)arg1 cachesDirectoryURL:(id)arg2;
- (id)initWithDataCryptorDelegate:(id)arg1;
- (id)init;

@end
