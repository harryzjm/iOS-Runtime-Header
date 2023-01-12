//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSFastEnumeration-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) id *keys;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;

@end
