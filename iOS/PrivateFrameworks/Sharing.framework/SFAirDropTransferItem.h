//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>
{
    _Bool _isFile;
    NSString *_type;
    long long _count;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isFile; // @synthesize isFile=_isFile;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementCount;
- (id)initWithType:(id)arg1 isFile:(_Bool)arg2;
- (id)init;

@end
