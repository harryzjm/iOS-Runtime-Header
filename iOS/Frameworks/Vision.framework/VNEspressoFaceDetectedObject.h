//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/ExternalDetectedObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNEspressoFaceDetectedObject : NSObject <ExternalDetectedObject>
{
    float _confidence;
    struct CGPoint _center;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property struct CGPoint center; // @synthesize center=_center;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property long long objectType;
- (id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

