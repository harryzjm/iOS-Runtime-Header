//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/EspressoBrick-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLGeluActivationBrick : NSObject <EspressoBrick>
{
    unsigned long long _size;
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (_Bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
