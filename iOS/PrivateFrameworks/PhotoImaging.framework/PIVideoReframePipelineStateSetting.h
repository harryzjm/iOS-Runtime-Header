//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PIVideoReframePipelineStateSetting : NSObject
{
    long long _sampleMode;
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _rawTime;
}

@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property(nonatomic) CDStruct_1b6d18a9 rawTime; // @synthesize rawTime=_rawTime;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end
