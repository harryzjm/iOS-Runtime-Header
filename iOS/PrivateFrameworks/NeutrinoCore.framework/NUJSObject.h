//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUJSObject
{
}

+ (struct OpaqueJSClass *)jsClass;
- (id)toObject;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (_Bool)hasProperty:(id)arg1;
- (id)JSValueWithContext:(id)arg1;

@end

