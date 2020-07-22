//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CBAdaptationClient : NSObject
{
    _Bool _supported;
}

+ (_Bool)supportsAdaptation;
@property _Bool supported; // @synthesize supported=_supported;
- (_Bool)animateFromWeakestAdaptationModeInArray:(int *)arg1 withLength:(int)arg2 toWeakestInArray:(int *)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (_Bool)getStrengths:(float *)arg1 nStrengths:(int)arg2;
- (_Bool)overrideStrengths:(float *)arg1 forModes:(int *)arg2 nModes:(int)arg3;
- (_Bool)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (_Bool)setWeakestAdaptationModeFromArray:(int *)arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (int)getAdaptationMode;
- (_Bool)getEnabled;
- (_Bool)setEnabled:(_Bool)arg1;
- (id)init;
- (id)initWithClientObj:(id)arg1;

@end

