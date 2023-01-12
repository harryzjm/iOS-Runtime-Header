//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@interface TRIDiskUsage : NSObject <NSCopying>
{
    unsigned long long _naiveSum;
    unsigned long long _deduplicatedSum;
    unsigned long long _compressedSum;
}

+ (id)usageWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long compressedSum; // @synthesize compressedSum=_compressedSum;
@property(readonly, nonatomic) unsigned long long deduplicatedSum; // @synthesize deduplicatedSum=_deduplicatedSum;
@property(readonly, nonatomic) unsigned long long naiveSum; // @synthesize naiveSum=_naiveSum;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToUsage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithReplacementCompressedSum:(unsigned long long)arg1;
- (id)copyWithReplacementDeduplicatedSum:(unsigned long long)arg1;
- (id)copyWithReplacementNaiveSum:(unsigned long long)arg1;
- (id)initWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;

@end
