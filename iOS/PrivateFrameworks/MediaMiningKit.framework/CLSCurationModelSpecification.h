//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCopying-Protocol.h>

@interface CLSCurationModelSpecification : NSObject <NSCopying>
{
    unsigned long long _curationModelVersion;
    unsigned long long _sceneAnalysisVersion;
    unsigned long long _mediaAnalysisVersion;
    unsigned long long _faceAnalysisVersion;
}

@property(readonly) unsigned long long faceAnalysisVersion; // @synthesize faceAnalysisVersion=_faceAnalysisVersion;
@property(readonly) unsigned long long mediaAnalysisVersion; // @synthesize mediaAnalysisVersion=_mediaAnalysisVersion;
@property(readonly) unsigned long long sceneAnalysisVersion; // @synthesize sceneAnalysisVersion=_sceneAnalysisVersion;
@property(readonly) unsigned long long curationModelVersion; // @synthesize curationModelVersion=_curationModelVersion;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemInfo:(id)arg1 options:(id)arg2;
- (id)initWithAsset:(id)arg1 curationModelVersion:(unsigned long long)arg2;
- (id)initWithCurationModelVersion:(unsigned long long)arg1 sceneAnalysisVersion:(unsigned long long)arg2 mediaAnalysisVersion:(unsigned long long)arg3 faceAnalysisVersion:(unsigned long long)arg4;

@end
