//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDVideoResolution <NSSecureCoding, NSCopying>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    unsigned long long _resolutionType;
}

+ (id)arrayWithResolutions:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long resolutionType; // @synthesize resolutionType=_resolutionType;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_extractWidthAndHeight;
- (id)initWithResolution:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

