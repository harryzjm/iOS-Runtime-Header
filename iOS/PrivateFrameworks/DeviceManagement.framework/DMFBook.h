//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface DMFBook : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_author;
    NSString *_title;
    NSString *_version;
    unsigned long long _type;
    unsigned long long _state;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
@property(readonly, copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 iTunesStoreID:(id)arg2 author:(id)arg3 title:(id)arg4 version:(id)arg5 type:(unsigned long long)arg6 state:(unsigned long long)arg7;

@end
