//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTransaction;
@protocol SBUIAnimationControllerCoordinating;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject
{
    BSTransaction<SBUIAnimationControllerCoordinating> *_coordinatingChildTransaction;
    unsigned long long _schedulingPolicy;
}

@property(readonly, nonatomic) unsigned long long schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction; // @synthesize coordinatingChildTransaction=_coordinatingChildTransaction;
- (void).cxx_destruct;
- (id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end
