//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSPForwardsCompatibleField-Protocol.h>

@interface TSPUnknownField : NSObject <TSPForwardsCompatibleField>
{
    shared_ptr_b9bbcad9 _fieldSet;
    struct FieldInfo _fieldInfo;
}

+ (id)unknownFieldWithFieldSet:(shared_ptr_b9bbcad9 *)arg1 fieldInfo:(const struct FieldInfo *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)updateMessageInfo:(struct MessageInfo *)arg1;
- (void)mergeToMessage:(struct Message *)arg1 reflection:(const struct Reflection *)arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet *)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (const struct FieldInfo *)fieldInfo;
@property(readonly, nonatomic) _Bool hasUnknownValues;
@property(readonly, nonatomic) _Bool hasKnownValues;
- (id)initWithFieldSet:(shared_ptr_b9bbcad9 *)arg1 fieldInfo:(const struct FieldInfo *)arg2;

@end
