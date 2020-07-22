//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying>
{
    NSArray *_characteristics;
}

+ (id)na_identity;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isObject:(id)arg1 equalToObject:(id)arg2;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristics:(id)arg1;

@end

