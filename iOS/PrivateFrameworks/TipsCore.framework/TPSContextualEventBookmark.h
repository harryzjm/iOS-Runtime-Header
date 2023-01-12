//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@interface TPSContextualEventBookmark : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _dataVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataVersion:(unsigned int)arg1;

@end
