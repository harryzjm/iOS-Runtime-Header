//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDOStreamData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSUnkeyedPortCoder
{
    id sndPort;
    id rcvPort;
    NSDOStreamData *doStreamData;
    NSMutableArray *components;
    NSMutableArray *importedObjects;
    unsigned long long componentIndex;
    _Bool isBycopy;
    _Bool isByref;
    _Bool isValid;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)_enableLogging:(_Bool)arg1;
- (id)decodeRetainedObject;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeObject:(id)arg1 isBycopy:(_Bool)arg2 isByref:(_Bool)arg3;
- (void)decodeReturnValue:(id)arg1;
- (void)encodeReturnValue:(id)arg1;
- (id)decodeInvocation;
- (void)encodeInvocation:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (id)decodePortObject;
- (void)encodePortObject:(id)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)decodeDataObject;
- (void)encodeDataObject:(id)arg1;
- (long long)versionForClassName:(id)arg1;
- (_Bool)isByref;
- (_Bool)isBycopy;
- (id)_proxyForLocalObject:(id)arg1;
- (id)connection;
- (void)importObject:(id)arg1;
- (id)importedObjects;
- (id)finishedComponents;
- (id)components;
- (void)dealloc;
- (void)invalidate;
- (void)dispatch;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)debugDescription;

@end

