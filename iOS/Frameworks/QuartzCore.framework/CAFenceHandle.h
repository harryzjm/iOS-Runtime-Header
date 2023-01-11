//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _handle_name;
    unsigned long long _fence_name;
    unsigned int _port;
    struct Mutex _invalidation_mutex;
    struct SpinLock _lock;
    _Bool _invalidated;
}

+ (_Bool)supportsSecureCoding;
+ (id)_newFenceWithPort:(unsigned int)arg1 name:(unsigned long long)arg2;
+ (id)handleForPort:(unsigned int)arg1 fenceId:(unsigned long long)arg2;
+ (id)handleFromXPCRepresentation:(id)arg1;
+ (id)newFenceFromDefaultServer;
+ (id)newFenceFromServer:(unsigned int)arg1;
+ (id)newObservableFenceFromServer:(unsigned int)arg1;
+ (id)_newFenceFromServer:(unsigned int)arg1 isObservable:(_Bool)arg2;
- (id).cxx_construct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_accessMachPort:(CDUnknownBlockType)arg1;
- (unsigned int)_copyPort;
@property(readonly) unsigned long long _name;
- (void)accessMachPort:(CDUnknownBlockType)arg1;
- (unsigned int)copyPort;
- (unsigned long long)fenceId;
- (id)createXPCRepresentation;
- (void)invalidate;
@property(readonly, getter=isInvalidated) _Bool invalidated;
@property(readonly, getter=isUsable) _Bool usable;
- (id)init;
- (unsigned int)_copyUntrackedPort;
- (void)dealloc;
- (id)_initWithXPCRepresentation:(id)arg1;
- (id)_initWithPort:(unsigned int)arg1 name:(unsigned long long)arg2;

@end
