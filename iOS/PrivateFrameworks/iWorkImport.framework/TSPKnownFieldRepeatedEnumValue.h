//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSPKnownFieldRepeatedEnumValue
{
    shared_ptr_b9bbcad9 _unknownFieldSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)mergeToMessage:(struct Message *)arg1 reflection:(const struct Reflection *)arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet *)arg1;
- (_Bool)hasUnknownValues;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor *)arg1 fieldInfo:(const struct FieldInfo *)arg2 message:(const struct Message *)arg3 reflection:(const struct Reflection *)arg4 unknownFieldSet:(shared_ptr_b9bbcad9 *)arg5;

@end

