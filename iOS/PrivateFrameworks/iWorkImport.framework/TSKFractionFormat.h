//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKFractionFormat <NSCopying>
{
    _Bool _usePlusSign;
    int _fractionAccuracy;
}

@property(readonly, nonatomic) _Bool usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
- (id)asFractionFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFractionAccuracy:(int)arg1;
- (id)initWithFormatType:(int)arg1;

@end

