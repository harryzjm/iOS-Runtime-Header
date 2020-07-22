//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@interface UICollectionLayoutGeometryAttribute : NSObject <NSCopying>
{
    long long _attributeID;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) long long attributeID; // @synthesize attributeID=_attributeID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)geometryValue;
- (id)stringValue;
- (long long)integerValue;
- (double)floatValue;
- (id)initWithAttributeID:(long long)arg1 value:(id)arg2;
- (id)initWithAttributeID:(long long)arg1;

@end
