//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OSLogEventDecomposedMessage;

__attribute__((visibility("hidden")))
@interface OSLogEventMessageArgument : NSObject
{
    OSLogEventDecomposedMessage *_decomposedMessage;
    struct os_log_fmt_raw_placeholder *_rawArg;
    unsigned long long _sizeofLong;
}

@property(readonly, nonatomic) long double longDoubleValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) long long int64Value;
@property(readonly, nonatomic) unsigned long long unsignedInt64Value;
@property(readonly, nonatomic) NSObject *objectRepresentation;
@property(readonly, nonatomic) unsigned long long category;
@property(readonly, nonatomic) unsigned long long scalarType;
@property(readonly, nonatomic) unsigned long long scalarCategory;
@property(readonly, nonatomic) unsigned short rawBytesLength;
@property(readonly, nonatomic) const void *rawBytes;
@property(readonly, nonatomic) unsigned long long privacy;
@property(readonly, nonatomic) unsigned long long availability;
- (id)initWithProxy:(id)arg1 index:(unsigned long long)arg2;

@end
