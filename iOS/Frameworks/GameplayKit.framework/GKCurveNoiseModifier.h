//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKCurveNoiseModifier
{
    double *_parameters;
    double *_controlPoints;
    int _count;
}

- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (void)dealloc;
- (id)initWithControlPoints:(id)arg1;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

