//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;
    NSMutableDictionary *_valueTypeMap;
}

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;
@property(retain, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;
@property(retain, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
- (void).cxx_destruct;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (id)_init;
- (long long)valueTypeForProperty:(id)arg1;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (_Bool)hasInfoForProperty:(id)arg1;

@end

