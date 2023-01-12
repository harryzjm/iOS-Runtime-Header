//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSection : NSObject
{
    NSUUID *_identifier;
    _Bool _isCompact;
    unsigned long long _preferredActionLineLimit;
}

+ (id)sectionWithMenu:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long preferredActionLineLimit; // @synthesize preferredActionLineLimit=_preferredActionLineLimit;
@property(readonly, nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
