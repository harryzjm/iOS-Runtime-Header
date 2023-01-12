//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaKeyIndex : NSObject <NSCopying>
{
    unsigned char _MKI[16];
    unsigned int _activeSize;
    _Bool _isMapped;
    unsigned char _mapKey;
}

+ (id)makeInvalidKey;
+ (id)newMKIWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isStartingWithPrefix:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (_Bool)setMapping:(unsigned char)arg1;
- (unsigned int)mappedKeyBytes:(char *)arg1 size:(unsigned int)arg2;
- (unsigned int)mappedKeySize;
- (void)fullKeyBytes:(unsigned char [16])arg1;
- (id)description;
- (const char *)MKI;
- (void)setMapKey:(unsigned char)arg1;
@property(readonly) unsigned char mapKey;
@property(readonly) _Bool isMapped;
- (void)setActiveSize:(unsigned int)arg1;
@property(readonly) unsigned int activeSize;
- (void)dealloc;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithUUID:(unsigned char [16])arg1;
- (id)initWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;

@end
