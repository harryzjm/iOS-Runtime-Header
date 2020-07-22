//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIForceObservationMessageConstructing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing>
{
    _Bool _reset;
    double touchForce;
    unsigned long long stage;
    double timestamp;
}

+ (id)reset;
+ (id)observe:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isReset) _Bool reset; // @synthesize reset=_reset;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned long long stage; // @synthesize stage;
@property(nonatomic) double touchForce; // @synthesize touchForce;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

