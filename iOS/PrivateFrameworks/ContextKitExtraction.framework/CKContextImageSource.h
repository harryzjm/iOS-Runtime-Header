//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKitExtraction/NSSecureCoding-Protocol.h>

@class IOSurface, NSData;

@interface CKContextImageSource : NSObject <NSSecureCoding>
{
    unsigned int _orientation;
    IOSurface *_ioSurface;
    NSData *_cameraIntrinsics;
    long long _profile;
}

+ (id)imageSourceForUIImage:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long profile; // @synthesize profile=_profile;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSData *cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(retain, nonatomic) IOSurface *ioSurface; // @synthesize ioSurface=_ioSurface;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(id)arg1 cameraIntrinsics:(id)arg2;
- (id)initWithIOSurface:(id)arg1;

@end
