//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPDataMetadataMap;

__attribute__((visibility("hidden")))
@interface TSPPackageMetadata
{
    struct PackageMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (id)packageLocator;
- (struct PackageMetadata *)message;
- (id)initWithContext:(id)arg1;

@end
