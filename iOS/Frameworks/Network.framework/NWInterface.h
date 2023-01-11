//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NSCopying-Protocol.h>
#import <Network/NSSecureCoding-Protocol.h>
#import <Network/NWPrettyDescription-Protocol.h>

@class NSString;
@protocol OS_nw_interface;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_interface> *_internalInterface;
}

+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) NSObject<OS_nw_interface> *internalInterface; // @synthesize internalInterface=_internalInterface;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
@property(readonly, nonatomic) NSString *typeString;
- (_Bool)isDeepEqual:(id)arg1;
- (_Bool)isShallowEqual:(id)arg1;
@property(readonly, nonatomic) NWInterface *delegateInterface;
@property(readonly, nonatomic) unsigned long long generation;
@property(readonly, nonatomic) long long mtu;
@property(readonly, nonatomic, getter=isExpensive) _Bool expensive;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) unsigned long long interfaceIndex;
@property(readonly, nonatomic) NSString *interfaceName;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2;

@end
