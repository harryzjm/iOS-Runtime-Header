//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface asn1Token : NSObject
{
    unsigned char mClass;
    unsigned long long mIdentifier;
    unsigned long long mLength;
    const char *mContent;
}

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(_Bool)arg2;
@property(readonly) const char *content; // @synthesize content=mContent;
@property(readonly) unsigned long long length; // @synthesize length=mLength;
@property(readonly) unsigned long long identifier; // @synthesize identifier=mIdentifier;
@property(readonly) unsigned char tokenClass; // @synthesize tokenClass=mClass;
- (id)description;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;

@end

