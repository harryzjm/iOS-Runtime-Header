//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MCMCodeSigningEntry : NSObject
{
    _Bool _invalid;
    _Bool _placeholder;
    _Bool _advanceCopy;
    _Bool _registeredByCaller;
    _Bool _registeredByKernel;
    NSDictionary *_codeSigningInfo;
    NSArray *_childBundleIdentifiers;
    unsigned long long _dataContainerClass;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dataContainerClass; // @synthesize dataContainerClass=_dataContainerClass;
@property(nonatomic, getter=isRegisteredByKernel) _Bool registeredByKernel; // @synthesize registeredByKernel=_registeredByKernel;
@property(nonatomic, getter=isRegisteredByCaller) _Bool registeredByCaller; // @synthesize registeredByCaller=_registeredByCaller;
@property(nonatomic, getter=isAdvanceCopy) _Bool advanceCopy; // @synthesize advanceCopy=_advanceCopy;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSArray *childBundleIdentifiers; // @synthesize childBundleIdentifiers=_childBundleIdentifiers;
@property(retain, nonatomic) NSDictionary *codeSigningInfo; // @synthesize codeSigningInfo=_codeSigningInfo;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithSerializedDictionary:(id)arg1;
- (id)initWithCodeSigningInfo:(id)arg1;
- (id)initWithCodeSigningInfo:(id)arg1 andDataContainerClass:(unsigned long long)arg2;

@end

