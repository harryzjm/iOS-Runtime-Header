//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPClassificationInfo : NSObject
{
    float _confidence;
    CDStruct_1b6d18a9 _duration;
}

@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void)update:(CDStruct_e83c9415)arg1 confidence:(float)arg2;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 confidence:(float)arg2;

@end

