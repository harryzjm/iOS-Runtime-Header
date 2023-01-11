//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@protocol OS_nw_path;

__attribute__((visibility("hidden")))
@interface PathHolder : NSObject <NSCopying>
{
    NSObject<OS_nw_path> *_path;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

