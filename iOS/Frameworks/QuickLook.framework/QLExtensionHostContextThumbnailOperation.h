//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLItem, QLThumbnailHostContext;

__attribute__((visibility("hidden")))
@interface QLExtensionHostContextThumbnailOperation
{
    QLThumbnailHostContext *_hostContext;
    CDUnknownBlockType _serviceErrorHandler;
    CDUnknownBlockType _completionHandler;
    QLItem *_item;
    double _minimumSize;
    double _scale;
    struct CGSize _size;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) QLItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceErrorHandler; // @synthesize serviceErrorHandler=_serviceErrorHandler;
@property(retain, nonatomic) QLThumbnailHostContext *hostContext; // @synthesize hostContext=_hostContext;
- (void).cxx_destruct;
- (void)finish;
- (void)main;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 completionHandler:(CDUnknownBlockType)arg6 serviceErrorHandler:(CDUnknownBlockType)arg7;

@end

