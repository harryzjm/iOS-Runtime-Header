//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, WBSParsecImageRepresentation;

@interface WBSParsecKeyValueDataCardSection
{
    NSArray *_keys;
    NSArray *_values;
    WBSParsecImageRepresentation *_accessoryImageRepresentation;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, copy, nonatomic) WBSParsecImageRepresentation *accessoryImageRepresentation; // @synthesize accessoryImageRepresentation=_accessoryImageRepresentation;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end
