//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRE/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface REAttributeDescriptor : NSObject <NSSecureCoding>
{
    unsigned int _payloadOffset;
    unsigned int _count;
    unsigned int _stride;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int stride; // @synthesize stride=_stride;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned int payloadOffset; // @synthesize payloadOffset=_payloadOffset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long bufferSize;
- (_Bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 payloadOffset:(unsigned int)arg2 count:(unsigned int)arg3 stride:(unsigned int)arg4;
- (id)initWithName:(id)arg1 buffer:(void *)arg2 elementSize:(unsigned long long)arg3 payloadBuilder:(void *)arg4;

@end
