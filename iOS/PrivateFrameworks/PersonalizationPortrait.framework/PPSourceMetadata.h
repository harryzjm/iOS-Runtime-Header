//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/_PASZonedObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSSet;

@interface PPSourceMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider>
{
    unsigned char _flags;
    unsigned short _donationCount;
    unsigned short _contactHandleCount;
    unsigned int _dwellTimeSeconds;
    unsigned int _lengthSeconds;
    unsigned int _lengthCharacters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned short contactHandleCount; // @synthesize contactHandleCount=_contactHandleCount;
@property(readonly, nonatomic) unsigned short donationCount; // @synthesize donationCount=_donationCount;
@property(readonly, nonatomic) unsigned int lengthCharacters; // @synthesize lengthCharacters=_lengthCharacters;
@property(readonly, nonatomic) unsigned int lengthSeconds; // @synthesize lengthSeconds=_lengthSeconds;
@property(readonly, nonatomic) unsigned int dwellTimeSeconds; // @synthesize dwellTimeSeconds=_dwellTimeSeconds;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSourceMetadata:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDwellTimeSeconds:(unsigned int)arg1 lengthSeconds:(unsigned int)arg2 lengthCharacters:(unsigned int)arg3 donationCount:(unsigned short)arg4 contactHandleCount:(unsigned short)arg5 flags:(unsigned char)arg6;
- (id)initWithFlags:(unsigned char)arg1;
- (id)init;

@end
