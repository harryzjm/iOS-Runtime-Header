//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct FLCompoundSpring {
    struct FLSimpleSpringState state;
    struct FLSimpleSpring stiffness;
    struct FLSimpleSpring damping;
    struct FLSimpleSpring dampingRatio;
    struct FLSimpleSpring response;
    struct FLSimpleSpring anchor;
    _Bool usesDampingRatioResponse;
    double stablePositionThreshold;
    double stableVelocityThreshold;
};

struct FLSimpleSpring {
    struct FLSimpleSpringState state;
    double mass;
    double stiffness;
    double damping;
    double anchor;
    double stablePositionThreshold;
    double stableVelocityThreshold;
};

struct FLSimpleSpringState {
    double position;
    double velocity;
};

struct FLSpringParameters {
    double dampingRatio;
    double dampingRatioSmoothing;
    double response;
    double responseSmoothing;
};
