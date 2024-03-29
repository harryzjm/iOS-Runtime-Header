//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject
{
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setUp:(id)arg1;
- (id)up;
- (void)setNormal:(id)arg1;
- (id)normal;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

