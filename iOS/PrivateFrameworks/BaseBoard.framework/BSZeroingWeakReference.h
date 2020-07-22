//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

+ (id)referenceWithObject:(id)arg1;
@property(nonatomic) unsigned long long objectAddress; // @synthesize objectAddress=_objectAddress;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) id object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

