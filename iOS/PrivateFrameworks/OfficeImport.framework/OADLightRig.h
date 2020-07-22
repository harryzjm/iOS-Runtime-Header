//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRotation:(id)arg1;
- (id)rotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

