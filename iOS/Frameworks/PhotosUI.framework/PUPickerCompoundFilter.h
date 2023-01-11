//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPickerFilter-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUPickerCompoundFilter : NSObject <PUPickerFilter>
{
    long long _filterType;
    NSArray *_subfilters;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *subfilters; // @synthesize subfilters=_subfilters;
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)generatedGenericAssetTypes;
- (unsigned long long)generatedSearchQueryFilterOptions;
- (id)generatedAssetPredicate;
@property(readonly, nonatomic) _Bool isValidFilter;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFilterType:(long long)arg1 subfilters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
