//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFResultData : NSData
{
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)isEqualToData:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (const void *)bytes;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setParentObject:(id)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
