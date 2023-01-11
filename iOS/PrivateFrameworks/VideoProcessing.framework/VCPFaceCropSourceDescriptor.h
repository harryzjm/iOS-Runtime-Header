//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoProcessing/NSCopying-Protocol.h>

@class PVFace, PVImage;

@interface VCPFaceCropSourceDescriptor : NSObject <NSCopying>
{
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)arg1 image:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)image;
- (id)face;
- (id)initWithFace:(id)arg1 image:(id)arg2;

@end
