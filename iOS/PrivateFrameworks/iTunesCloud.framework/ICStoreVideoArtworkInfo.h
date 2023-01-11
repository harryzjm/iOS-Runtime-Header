//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_aspectRatioToCRABSVideoDictionaries;
    NSDictionary *_aspectRatioToHLSVideoURL;
    NSDictionary *_aspectRatioToPreviewFrameArtworkInfo;
    NSString *_stringRepresentation;
    NSDictionary *_responseDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_aspectRatioKeyForAspectRatio:(double)arg1;
- (id)previewFrameArtworkInfoMatchingAspectRatio:(double)arg1;
- (id)HLSVideoURLForAspectRatio:(double)arg1;
- (id)CRABSVideoURLMatchingSize:(struct CGSize)arg1;
- (id)supportedSizesForCRABSVideoForAspectRatio:(double)arg1;
- (id)initWithVideoArtworkResponseDictionary:(id)arg1;

@end
