//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSSet, NSString;

@interface HAPMetadataService : HMFObject
{
    _Bool _allowAssociatedService;
    NSString *_name;
    NSString *_svcDescription;
    NSString *_uuidStr;
    NSString *_btleuuidStr;
    NSNumber *_properties;
    NSArray *_linkedServices;
    NSSet *_mandatoryCharacteristics;
    NSSet *_optionalCharacteristics;
}

@property(nonatomic) _Bool allowAssociatedService; // @synthesize allowAssociatedService=_allowAssociatedService;
@property(retain, nonatomic) NSSet *optionalCharacteristics; // @synthesize optionalCharacteristics=_optionalCharacteristics;
@property(retain, nonatomic) NSSet *mandatoryCharacteristics; // @synthesize mandatoryCharacteristics=_mandatoryCharacteristics;
@property(retain, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(retain, nonatomic) NSNumber *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *btleuuidStr; // @synthesize btleuuidStr=_btleuuidStr;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSString *svcDescription; // @synthesize svcDescription=_svcDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dump;
- (id)description;
- (id)generateDictionary:(id)arg1 metadata:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryChrTypes:(id)arg4 properties:(id)arg5 linkedServices:(id)arg6;

@end

