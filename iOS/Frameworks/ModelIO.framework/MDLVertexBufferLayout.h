//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLVertexBufferLayout : NSObject <NSCopying>
{
    unsigned long long _stride;
}

@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStride:(unsigned long long)arg1;

@end

