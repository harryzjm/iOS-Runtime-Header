//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MTLSAnimatablePathCollection;
@protocol MTLBuffer, MTLDevice;

@interface MTLSPathBufferData : NSObject
{
    MISSING_TYPE *_viewRatio;
    MTLSAnimatablePathCollection *_collection;
    id <MTLDevice> _device;
    id <MTLBuffer> _tessellationFactors;
    id <MTLBuffer> _controlPoints;
    id <MTLBuffer> _indices;
    id <MTLBuffer> _patchInfo;
    id <MTLBuffer> _instanceInfo;
}

@property(readonly) id <MTLBuffer> instanceInfo; // @synthesize instanceInfo=_instanceInfo;
@property(readonly) id <MTLBuffer> patchInfo; // @synthesize patchInfo=_patchInfo;
@property(readonly) id <MTLBuffer> indices; // @synthesize indices=_indices;
@property(readonly) id <MTLBuffer> controlPoints; // @synthesize controlPoints=_controlPoints;
@property(readonly) id <MTLBuffer> tessellationFactors; // @synthesize tessellationFactors=_tessellationFactors;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(retain) MTLSAnimatablePathCollection *collection; // @synthesize collection=_collection;
@property MISSING_TYPE *viewRatio; // @synthesize viewRatio=_viewRatio;
- (void).cxx_destruct;
- (void)updateControlPointBufferWithData:(struct ControlPoint *)arg1 count:(unsigned long long)arg2;
- (void)updateInstanceBufferWithData:(struct InstanceInfo *)arg1 count:(unsigned long long)arg2;
- (void)commit;
- (id)initWithCollection:(id)arg1 device:(id)arg2 viewRatio: /* Error: Ran out of types for this method. */;
- (id)initWithDefaultPath:(id)arg1 device:(id)arg2 viewRatio: /* Error: Ran out of types for this method. */;
- (id)initWithDevice:(id)arg1 viewRatio: /* Error: Ran out of types for this method. */;

@end

