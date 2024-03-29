//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityGroup : NSObject
{
    NSObject<NSCopying> *_identifier;
    NSArray *_mediaEntities;
    NSArray *_sortIndexes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sortIndexes; // @synthesize sortIndexes=_sortIndexes;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(copy, nonatomic) NSObject<NSCopying> *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

