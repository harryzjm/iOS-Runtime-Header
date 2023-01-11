//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;
@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding>
{
    unsigned long long _length;
    _Bool _isShmem;
    unsigned long long _offset;
    NSObject<OS_xpc_object> *_data;
    NSData *_imageSetHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *imageSetHash; // @synthesize imageSetHash=_imageSetHash;
- (void).cxx_destruct;
- (void)purge;
- (id)containedImageSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(_Bool)arg3 offset:(unsigned long long)arg4 hash:(id)arg5;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)init;

@end

