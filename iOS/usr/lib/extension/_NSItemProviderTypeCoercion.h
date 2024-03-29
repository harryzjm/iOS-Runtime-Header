//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSItemProviderTypeCoercion : NSObject
{
    id _value;
    Class _targetClass;
}

+ (id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2;
@property(copy) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain) id value; // @synthesize value=_value;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id *)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id *)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id *)arg2;
- (id)coerceValueError:(id *)arg1;
- (_Bool)shouldCoerceForCoding;
- (void)dealloc;

@end

