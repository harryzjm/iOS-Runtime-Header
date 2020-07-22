//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUiOSMemoryWarningFlushable-Protocol.h>

@class NSString, TSUImage;

__attribute__((visibility("hidden")))
@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable>
{
    CDUnknownBlockType mHandler;
    TSUImage *mCachedImage;
    struct os_unfair_lock_s mLock;
}

+ (id)cachedImageWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)flush;
@property(readonly, nonatomic) TSUImage *image;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

