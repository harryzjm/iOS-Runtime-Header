//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class IOSurface, NSString, _FBSSnapshotContext;

@interface _FBSSnapshot : NSObject <BSInvalidatable>
{
    _FBSSnapshotContext *_context;
    struct CGImage *_imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}

@property(readonly, copy, nonatomic) _FBSSnapshotContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (struct CGSize)_scaledSnapshotSize;
- (double)_scale;
- (void)_synchronizedCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (void)_doInvalidate;
- (void)invalidate;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) IOSurface *fallbackIOSurface;
@property(readonly, nonatomic) IOSurface *IOSurface;
- (_Bool)capture;
@property(readonly, nonatomic) _Bool hasProtectedContent;
- (void)dealloc;
- (id)initWithSnapshotContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
