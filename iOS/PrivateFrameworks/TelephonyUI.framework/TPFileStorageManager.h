//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface TPFileStorageManager : NSObject
{
    _Bool _hasClearedLegacyStorage;
    NSURL *_urlForFileSystem;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasClearedLegacyStorage; // @synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)deleteStorageAtURLs:(id)arg1;
- (void)clearLegacyStorageIfNecessary;
- (id)urlsForLegacyFileSystem;
@property(readonly, nonatomic) NSURL *urlForFileSystem; // @synthesize urlForFileSystem=_urlForFileSystem;
- (void)localeChanged;
- (id)imageWithName:(id)arg1;
- (void)saveImage:(id)arg1 withName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

