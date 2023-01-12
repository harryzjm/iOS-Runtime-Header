//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchScope;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject
{
    MPModelLibrarySearchScope *_underlyingSearchScope;
    long long _modelObjectType;
}

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)arg1;
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long modelObjectType; // @synthesize modelObjectType=_modelObjectType;
- (long long)_modelObjectType;
- (id)_underlyingSearchScope;
- (id)initWithModelObjectType:(long long)arg1;
- (id)_initWithUnderlyingSearchScope:(id)arg1 modelObjectType:(long long)arg2;

@end

