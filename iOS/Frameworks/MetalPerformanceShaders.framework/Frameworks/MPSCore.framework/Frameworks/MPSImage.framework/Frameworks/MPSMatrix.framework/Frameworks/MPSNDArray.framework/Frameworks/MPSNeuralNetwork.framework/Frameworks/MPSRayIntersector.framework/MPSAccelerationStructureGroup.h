//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface MPSAccelerationStructureGroup : NSObject
{
    struct MPSBVHGroup *_bvhGroup;
}

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 storageMode:(unsigned long long)arg2;
- (struct MPSBVHGroup *)bvhGroup;
@property(readonly, nonatomic) id <MTLDevice> device;

@end
