//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_uuids;
}

+ (id)lastUUIDFromUUIDPathString:(id)arg1;
@property(readonly, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDPathString;
@property(readonly, nonatomic) NSUUID *lastUUID;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)saveToMessage:(struct UUIDPath *)arg1;
- (id)initWithMessage:(const struct UUIDPath *)arg1;

@end
