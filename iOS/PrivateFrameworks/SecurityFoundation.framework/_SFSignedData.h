//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding>
{
    id _signedDataInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *signature;
@property(readonly) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 signature:(id)arg2;

@end

