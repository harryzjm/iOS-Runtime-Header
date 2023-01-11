//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@interface CLSQuantityReportItem <NSSecureCoding, NSCopying>
{
    double _quantity;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double quantity; // @synthesize quantity=_quantity;
- (id)dictionaryRepresentation;
- (id)description;
- (void)scalarMultiply:(double)arg1;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

