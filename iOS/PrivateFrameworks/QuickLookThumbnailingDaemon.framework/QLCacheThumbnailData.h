//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, QLCacheBlobInfo, QLCacheFileIdentifier, QLThumbnailVersion;
@protocol OS_dispatch_queue;

@interface QLCacheThumbnailData : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _state;
    _Bool _iconMode;
    float _size;
    int _interpolationQuality;
    unsigned int _bitmapInfo;
    int _flavor;
    unsigned long long _totalBufferSize;
    QLCacheFileIdentifier *_fileIdentifier;
    QLThumbnailVersion *_version;
    unsigned long long _cacheId;
    long long _iconVariant;
    unsigned long long _badgeType;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    NSData *_bitmapData;
    NSData *_metadata;
    QLCacheBlobInfo *_bitmapDataToValidate;
    QLCacheBlobInfo *_metadataToValidate;
    unsigned long long _externalGeneratorDataHash;
    unsigned long long _hitCount;
    NSDate *_lastHitDate;
    struct CGRect _contentRect;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *lastHitDate; // @synthesize lastHitDate=_lastHitDate;
@property(readonly, nonatomic) unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property(readonly, nonatomic) unsigned long long externalGeneratorDataHash; // @synthesize externalGeneratorDataHash=_externalGeneratorDataHash;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) int flavor; // @synthesize flavor=_flavor;
@property(retain, nonatomic) QLCacheBlobInfo *metadataToValidate; // @synthesize metadataToValidate=_metadataToValidate;
@property(retain, nonatomic) QLCacheBlobInfo *bitmapDataToValidate; // @synthesize bitmapDataToValidate=_bitmapDataToValidate;
@property(readonly, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
@property(readonly, nonatomic) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(readonly, nonatomic) unsigned long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(readonly, nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(readonly, nonatomic) long long iconVariant; // @synthesize iconVariant=_iconVariant;
@property(readonly, nonatomic) _Bool iconMode; // @synthesize iconMode=_iconMode;
@property(readonly, nonatomic) float size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long cacheId; // @synthesize cacheId=_cacheId;
@property(readonly, nonatomic) QLThumbnailVersion *version; // @synthesize version=_version;
@property(readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, nonatomic) unsigned long long totalBufferSize; // @synthesize totalBufferSize=_totalBufferSize;
@property(readonly, nonatomic) _Bool hasData;
- (unsigned long long)state;
- (_Bool)setState:(unsigned long long)arg1 changedState:(_Bool *)arg2;
- (_Bool)setState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithUnsavedDataForThumbnailRequest:(id)arg1 size:(float)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bitsPerComponent:(unsigned long long)arg5 bitsPerPixel:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 bitmapInfo:(unsigned int)arg8 bitmapData:(id)arg9 reservationInfo:(id)arg10 metadata:(id)arg11 reservationInfo:(id)arg12 flavor:(int)arg13 contentRect:(struct CGRect)arg14 badgeType:(unsigned long long)arg15;
- (id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 badgeType:(unsigned long long)arg4;
- (id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bitsPerPixel:(unsigned long long)arg7 bytesPerRow:(unsigned long long)arg8 bitmapInfo:(unsigned int)arg9 bitmapData:(id)arg10 metadata:(id)arg11 flavor:(int)arg12 contentRect:(struct CGRect)arg13 badgeType:(unsigned long long)arg14;
- (id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(_Bool)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 hitCount:(unsigned long long)arg8 lastHitDate:(id)arg9 width:(unsigned long long)arg10 height:(unsigned long long)arg11 bitsPerComponent:(unsigned long long)arg12 bitsPerPixel:(unsigned long long)arg13 bytesPerRow:(unsigned long long)arg14 bitmapInfo:(unsigned int)arg15 bitmapData:(id)arg16 metadata:(id)arg17 flavor:(int)arg18 contentRect:(struct CGRect)arg19 badgeType:(unsigned long long)arg20 externalGeneratorDataHash:(unsigned long long)arg21;
- (id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(_Bool)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 badgeType:(unsigned long long)arg8 externalGeneratorDataHash:(unsigned long long)arg9 hitCount:(unsigned long long)arg10 lastHitDate:(id)arg11;

@end
