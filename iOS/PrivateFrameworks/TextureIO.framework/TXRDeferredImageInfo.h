//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TXRImageInfo;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TXRDeferredImageInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    TXRImageInfo *_info;
}

@property(retain, nonatomic) TXRImageInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)signalLoaded;
- (id)init;

@end

