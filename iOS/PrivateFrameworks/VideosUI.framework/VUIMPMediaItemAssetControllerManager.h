//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetControllerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
- (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1;
- (id)mediaItemAssetControllerWithMediaItem:(id)arg1;
- (id)init;

@end

