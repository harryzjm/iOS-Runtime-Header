//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMError : NSObject
{
    int _POSIXerrno;
    unsigned long long _type;
    unsigned long long _category;
    NSString *_path;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int POSIXerrno; // @synthesize POSIXerrno=_POSIXerrno;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMCMError:(id)arg1;
- (unsigned long long)hash;
- (id)fullDescription;
- (id)description;
- (struct container_error_extended_s *)libsystemError;
- (id)initWithNSError:(id)arg1 url:(id)arg2 defaultErrorType:(unsigned long long)arg3;
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2 path:(id)arg3 POSIXerrno:(int)arg4;
- (id)initWithErrorType:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)initWithErrorType:(unsigned long long)arg1;
- (id)init;
- (id)initWithLibsystemError:(struct container_error_extended_s *)arg1;

@end

