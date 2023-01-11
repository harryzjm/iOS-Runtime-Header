//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class VNFaceAttributeCategory;

@interface VNFaceAttributes : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    VNFaceAttributeCategory *_ageCategory;
    VNFaceAttributeCategory *_genderCategory;
    VNFaceAttributeCategory *_eyesCategory;
    VNFaceAttributeCategory *_smilingCategory;
    VNFaceAttributeCategory *_faceHairCategory;
    VNFaceAttributeCategory *_hairColorCategory;
    VNFaceAttributeCategory *_baldCategory;
    VNFaceAttributeCategory *_glassesCategory;
    unsigned long long _requestRevision;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(copy, nonatomic) VNFaceAttributeCategory *glassesCategory; // @synthesize glassesCategory=_glassesCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *baldCategory; // @synthesize baldCategory=_baldCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *hairColorCategory; // @synthesize hairColorCategory=_hairColorCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *faceHairCategory; // @synthesize faceHairCategory=_faceHairCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *smilingCategory; // @synthesize smilingCategory=_smilingCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *eyesCategory; // @synthesize eyesCategory=_eyesCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *genderCategory; // @synthesize genderCategory=_genderCategory;
@property(copy, nonatomic) VNFaceAttributeCategory *ageCategory; // @synthesize ageCategory=_ageCategory;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end

