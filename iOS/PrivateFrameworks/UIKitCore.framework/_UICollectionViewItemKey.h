//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject
{
    NSIndexPath *_indexPath;
    NSString *_identifier;
    _Bool _isClone;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

