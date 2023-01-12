//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, _TVURLSessionDownloadTaskWrapper;

@interface VUILayeredImageProxy : NSObject
{
    _TVURLSessionDownloadTaskWrapper *_downloadTaskWrapper;
    _Bool _cancelled;
    NSURL *_url;
    long long _groupType;
    NSString *_assetKey;
}

+ (id)_loadingQueue;
- (void).cxx_destruct;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)_assetPathWithAssetKey:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isImageAvailable;
- (_Bool)isLoading;
- (void)cancel;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 groupType:(long long)arg2 assetKey:(id)arg3;
- (id)initWithURL:(id)arg1 groupType:(long long)arg2;
- (id)initWithURL:(id)arg1;

@end
