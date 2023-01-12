//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>

@class NSString;

@interface CRDocumentOutputRegionMetadata : NSObject <CRCodable>
{
    unsigned long long _numFilteredRegions;
}

@property unsigned long long numFilteredRegions; // @synthesize numFilteredRegions=_numFilteredRegions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
