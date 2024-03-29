//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOBaseMapItem.h"

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDLinkedPlace;

__attribute__((visibility("hidden")))
@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem
{
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)_isInLinkedPlaceRelationship;
- (id)_styleAttributes;
- (int)_resultProviderID;
- (_Bool)_hasResultProviderID;
- (id)_identifier;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (_Bool)_responseStatusIsIncomplete;
- (_Bool)_hasResolvablePartialInformation;
- (CDStruct_c3b9c2ee)coordinate;
- (int)referenceFrame;
- (id)name;
- (_Bool)isValid;
- (id)initWithLinkedPlace:(id)arg1;

@end

