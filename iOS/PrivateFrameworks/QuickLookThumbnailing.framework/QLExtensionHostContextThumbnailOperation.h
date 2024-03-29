//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "QLAsynchronousOperation.h"

@class NSDictionary, NSFileCoordinator, NSObject, NSOperationQueue, QLThumbnailHostContext;
@protocol OS_dispatch_semaphore, QLTExtensionThumbnailItem;

__attribute__((visibility("hidden")))
@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation
{
    _Bool _wantsLowQuality;
    int _iconFlavor;
    int _interpolationQuality;
    QLThumbnailHostContext *_hostContext;
    CDUnknownBlockType _serviceErrorHandler;
    CDUnknownBlockType _completionHandler;
    id <QLTExtensionThumbnailItem> _item;
    double _minimumSize;
    double _scale;
    unsigned long long _badgeType;
    NSDictionary *_generatorData;
    NSObject<OS_dispatch_semaphore> *_generationSemaphore;
    NSFileCoordinator *_coordinator;
    NSOperationQueue *_coordinationQueue;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *coordinationQueue; // @synthesize coordinationQueue=_coordinationQueue;
@property(retain, nonatomic) NSFileCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *generationSemaphore; // @synthesize generationSemaphore=_generationSemaphore;
@property(nonatomic) _Bool wantsLowQuality; // @synthesize wantsLowQuality=_wantsLowQuality;
@property(nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(retain, nonatomic) NSDictionary *generatorData; // @synthesize generatorData=_generatorData;
@property(nonatomic) int iconFlavor; // @synthesize iconFlavor=_iconFlavor;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id <QLTExtensionThumbnailItem> item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceErrorHandler; // @synthesize serviceErrorHandler=_serviceErrorHandler;
@property(retain, nonatomic) QLThumbnailHostContext *hostContext; // @synthesize hostContext=_hostContext;
- (void)finish;
- (void)main;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 iconFlavor:(int)arg7 generatorData:(id)arg8 interpolationQuality:(int)arg9 wantsLowQuality:(_Bool)arg10 completionHandler:(CDUnknownBlockType)arg11 serviceErrorHandler:(CDUnknownBlockType)arg12;

@end

