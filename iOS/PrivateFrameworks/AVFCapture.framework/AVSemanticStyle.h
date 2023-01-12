//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVSemanticStyle : NSObject
{
    float _toneBias;
    float _warmthBias;
    unsigned long long _hash;
    float _subjectBias;
}

+ (id)identityStyle;
+ (id)semanticStyleWithToneBias:(float)arg1 warmthBias:(float)arg2;
@property(readonly, nonatomic) float subjectBias; // @synthesize subjectBias=_subjectBias;
- (unsigned long long)hash;
@property(readonly, nonatomic) float warmthBias; // @synthesize warmthBias=_warmthBias;
@property(readonly, nonatomic) float toneBias; // @synthesize toneBias=_toneBias;
- (id)description;
- (id)debugDescription;
@property(readonly, nonatomic) float sceneBias;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithToneBias:(float)arg1 warmthBias:(float)arg2;

@end
