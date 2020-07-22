//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TIPinyinDisambiguationCandidate
{
    NSString *_label;
}

+ (int)type;
+ (id)candidateWithPinyinSyllable:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (id)label;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPinyinSyllable:(id)arg1;
- (void)dealloc;

@end

