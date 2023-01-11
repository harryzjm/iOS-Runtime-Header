//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SVXDeviceSetupFlow : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_languageCode;
    long long _gender;
    NSArray *_scenes;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *scenes; // @synthesize scenes=_scenes;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 languageCode:(id)arg2 gender:(long long)arg3 scenes:(id)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
