//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/NSObject-Protocol.h>

@class CLSAssetUploadObserver, NSError;

@protocol CLSAssetUploadObservable <NSObject>
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, copy, nonatomic) NSError *uploadError;
@property(readonly, nonatomic) double fractionUploaded;
- (void)removeUploadObserver:(CLSAssetUploadObserver *)arg1;
- (void)addUploadObserver:(CLSAssetUploadObserver *)arg1;
@end

