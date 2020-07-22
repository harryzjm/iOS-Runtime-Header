//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextPosition.h>

@interface TSDTextPosition : UITextPosition
{
    unsigned long long _charIndex;
    _Bool _eolAffinity;
    float _preferredPosition;
    _Bool _isPreferredStart;
}

+ (id)textPositionWithCharIndex:(unsigned long long)arg1;
+ (id)textPositionWithCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isPreferredStart; // @synthesize isPreferredStart=_isPreferredStart;
@property(readonly, nonatomic) float preferredPosition; // @synthesize preferredPosition=_preferredPosition;
@property(readonly, nonatomic) _Bool endOfLineAffinity; // @synthesize endOfLineAffinity=_eolAffinity;
@property(readonly, nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
- (int)distanceFromPosition:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 eolAffinity:(_Bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(_Bool)arg4;

@end

