//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject
{
    struct _UIBoundingPathBitmapDataCorner _referenceCorner;
}

+ (_Bool)supportsSecureCoding;
+ (id)cachedReferenceCornerForRadius:(long long)arg1;
- (void)dealloc;
- (struct _UIBoundingPathBitmapDataCorner)referenceCornerCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner)arg1;

@end

