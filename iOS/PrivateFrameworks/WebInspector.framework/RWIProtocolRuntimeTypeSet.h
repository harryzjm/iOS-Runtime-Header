//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RWIProtocolRuntimeTypeSet
{
}

@property(nonatomic) _Bool isBigInt;
@property(nonatomic) _Bool isSymbol;
@property(nonatomic) _Bool isObject;
@property(nonatomic) _Bool isString;
@property(nonatomic) _Bool isNumber;
@property(nonatomic) _Bool isInteger;
@property(nonatomic) _Bool isBoolean;
@property(nonatomic) _Bool isNull;
@property(nonatomic) _Bool isUndefined;
@property(nonatomic) _Bool isFunction;
- (id)initWithIsFunction:(_Bool)arg1 isUndefined:(_Bool)arg2 isNull:(_Bool)arg3 isBoolean:(_Bool)arg4 isInteger:(_Bool)arg5 isNumber:(_Bool)arg6 isString:(_Bool)arg7 isObject:(_Bool)arg8 isSymbol:(_Bool)arg9 isBigInt:(_Bool)arg10;

@end
