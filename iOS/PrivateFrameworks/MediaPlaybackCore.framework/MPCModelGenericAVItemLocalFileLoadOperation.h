//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation
{
    _Bool _requirePreferredAssetQuality;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool requirePreferredAssetQuality; // @synthesize requirePreferredAssetQuality=_requirePreferredAssetQuality;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void).cxx_destruct;
- (void)execute;

@end

