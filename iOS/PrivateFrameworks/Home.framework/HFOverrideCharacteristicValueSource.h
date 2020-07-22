//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>

@class NSString;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;

@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource>
{
    id <HFCharacteristicValueSource> _originalValueSource;
    id <HFOverrideCharacteristicValueProvider> _overrideValueProvider;
}

+ (id)na_identity;
@property(nonatomic) __weak id <HFOverrideCharacteristicValueProvider> overrideValueProvider; // @synthesize overrideValueProvider=_overrideValueProvider;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> originalValueSource; // @synthesize originalValueSource=_originalValueSource;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

