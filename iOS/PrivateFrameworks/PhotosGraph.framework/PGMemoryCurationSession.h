//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSCurationContext, PGCurationManager, PGGraphLocationHelper, PHPhotoLibrary;

@interface PGMemoryCurationSession : NSObject
{
    PGCurationManager *_curationManager;
    PHPhotoLibrary *_photoLibrary;
    CLSCurationContext *_curationContext;
    PGGraphLocationHelper *_locationHelper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PGGraphLocationHelper *locationHelper; // @synthesize locationHelper=_locationHelper;
@property(readonly, nonatomic) CLSCurationContext *curationContext; // @synthesize curationContext=_curationContext;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PGCurationManager *curationManager; // @synthesize curationManager=_curationManager;
- (id)initWithCurationManager:(id)arg1 photoLibrary:(id)arg2 curationContext:(id)arg3 locationHelper:(id)arg4;

@end
