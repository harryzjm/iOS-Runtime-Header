//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PLPTPAsset, PLPTPConversionResult;

@protocol PLPTPConversionSupport <NSObject>
@property(readonly, nonatomic) _Bool peerSupportsAdjustmentBaseResources;
@property(readonly, nonatomic) _Bool peerSupportsTranscodeChoice;
@property(readonly, nonatomic) _Bool penultimateIsPublic;
- (PLPTPConversionResult *)conversionResultForAsset:(PLPTPAsset *)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;
@end
